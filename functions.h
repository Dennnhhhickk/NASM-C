#include <math.h>

extern double f1(double);
extern double f2(double);
extern double f3(double);
extern double testf1(double);
extern double testf2(double);
extern double testf3(double);
double integral(double (*)(double), double, double, double);
double root(double(*)(double), double(*)(double), double, double, double);
void swap(double*, double*);
void func(int, int, double[], int[]);

double testfunc(double x)
{
	return x * x * x * x - 24 * x * x * x + 107 * x * x - x + 4;
}

double testfunc1(double x)
{
	return fabs(x);
}

double testfunc2(double x)
{
	return 1 / (x);
}
