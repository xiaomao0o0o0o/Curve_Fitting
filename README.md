# README

## 线性拟合以及二参数指数拟合



## 一、介绍：本项目用C/C++实现了线性拟合及二参数的指数函数拟合功能。通过输入数据点，选用拟合函数得到相应参数。

## 二、使用方法：

## 1、线性拟合

```c++
	int fit_linear(const double *x,
               const double *y,
               const int n,
               double *A,
               double *B);
```

功能实现：输入数据点，得出线性拟合
$$
y=A*x+B
$$
的参数A， B。

参数列表：

| 参数名称 | 功能              |
| :------- | ----------------- |
| x        | 数组变量x[]的指针 |
| y        | 数组变量y[]的指针 |
| n        | 数组大小n         |
| A        | 拟合参数A         |
| B        | 拟合参数B         |





## 2、指数拟合

```C++
int
fit_exp_linear(const double *x,
               const double *y,
               const int n,
               double *A,
               double *B);
```

功能实现，输入数据点，得出指数拟合函数
$$
y = A * exp(B * x)
$$
的参数A，B。

参数列表

| 参数名称 | 功能描述          |
| -------- | ----------------- |
| x        | 数组变量x[]的指针 |
| y        | 数组变量y[]的指针 |
| n        | 数组大小n         |
| A        | 拟合参数A         |
| B        | 拟合参数B         |

## 三、使用样例：

```C++
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
```

## 四、参考链接：

### 线性拟合：

1、最小二乘简单实现：[fast & efficient least squares fit algorithm in C? - Stack Overflow](https://stackoverflow.com/questions/5083465/fast-efficient-least-squares-fit-algorithm-in-c)

2、在线拟合以及简单实现：[C Program for Linear/Exponential Curve Fitting | Code with C](https://www.codewithc.com/c-program-for-linear-exponential-curve-fitting/)			

3、GNU-GSL官方库：[Linear Least-Squares Fitting — GSL 2.7 documentation (gnu.org)](https://www.gnu.org/software/gsl/doc/html/lls.html#multi-parameter-linear-regression-example)

## 五、版本：

V1.0 实现线性和二参数指数函数拟合。

