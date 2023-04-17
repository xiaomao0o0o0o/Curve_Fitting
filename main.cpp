#include <stdio.h>
#include "linear_fit.h"


/* Fit the data (x_i, y_i) to the linear relationship

   Y = c0 + c1 x

   returning,

   c0, c1  --  coefficients
   cov00, cov01, cov11  --  variance-covariance matrix of c0 and c1,
   sumsq   --   sum of squares of residuals

   This fit can be used in the case where the errors for the data are
   uknown, but assumed equal for all points. The resulting
   variance-covariance matrix estimates the error in the coefficients
   from the observed variance of the points around the best fit line.
*/
int main(void) {
    int n = 4;
    double x[4] = {10, 14, 16, 10};
    double y[4] = {12, 11, 14, 13};

    double c0, c1, cov00, cov01, cov11, chisq;

    //fit_linear(x, y, n, &c0, &c1);

    // printf("# best fit: Y = %g + %g X\n", c0, c1);

    printf("\n");
 
    double X[10] = {1, 2, 3, 4};
    double Y[10] = {2.6, 7.6, 20.9, 53.1};
    double exp_a, exp_b;
    fit_exp_linear(X, Y, 4, &exp_a, &exp_b);
    printf("# best fit: Y = %g exp(%gx)", exp_a, exp_b);


    return 0;
}
