//
// Created by xiaomao on 2023/4/14.
//

#include "linear_fit.h"
#include "math.h"
#include <iostream>
using namespace std;
/* Fit the data (x_i, y_i) to the linear relationship

   Y = A + B x

   returning,

   A, B  --  coefficients
*/

int
fit_linear (const double *x,
                const double *y,
                const int n,
                double *A, double *B)
{
    double m_x = 0, m_y = 0, m_dx2 = 0, m_dxdy = 0;

    int i;

    for (i = 0; i < n; i++)
    {
        m_x += (x[i] - m_x) / (i + 1.0);
        m_y += (y[i] - m_y) / (i + 1.0);
    }


    for (i = 0; i < n; i++)
    {
        const double dx = x[i] - m_x;
        const double dy = y[i] - m_y;

        m_dx2 += (dx * dx - m_dx2) / (i + 1.0);
        m_dxdy += (dx * dy - m_dxdy) / (i + 1.0);
    }

    /* In terms of y = a + b x */

    {
        double b = m_dxdy / m_dx2;
        double a = m_y - m_x * b;

        *A = a;
        *B = b;


    }

    return 1;
}
/* Fit the data (x_i, y_i) to the exponential fitting relationship

   Y = A * exp(B * x)

   returning,

   A, B  --  coefficients
*/

int
fit_exp_linear(const double *x, const double *y, const int n, double *A,
                   double *B) {
    double *Y = nullptr;
    Y = new double[n];
    /*
     * Take the logarithm on the both sides of the equation
     */
    for (int i = 0; i < n; i++) {
        Y[i] = log(y[i]);
    }
    double a;
    double b;

    fit_linear(x,Y,n,&a,&b);
    *A = exp(a);
    *B = b;
    return 0;

}

