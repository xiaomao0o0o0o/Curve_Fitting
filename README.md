# README

## 线性拟合以及二参数指数拟合

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

