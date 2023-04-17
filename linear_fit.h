
#ifndef DEMO_LINEAR_FIT_H
#define DEMO_LINEAR_FIT_H


#ifdef __cplusplus
extern "C" {
#endif


/* Fit the data (x_i, y_i) to the linear relationship

   Y = A + B x

   returning,

   A, B  --  coefficients
*/
int fit_linear(const double *x,
               const double *y,
               const int n,
               double *A,
               double *B);


/* Fit the data (x_i, y_i) to the exponential fitting relationship

   Y = A * exp(B * x)

   returning,

   A, B  --  coefficients
*/
int
fit_exp_linear(const double *x,
               const double *y,
               const int n,
               double *A,
               double *B);


#ifdef __cplusplus
};
#endif


#endif //DEMO_LINEAR_FIT_H
