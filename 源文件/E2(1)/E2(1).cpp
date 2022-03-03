#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)
double fun(double m, int n)
{
	m *= pow(10, n);
	if (m - (int)(m) >= 0.5)
		m++;
	else
		m = m - (m - (int)(m));
	m = (int)m / (double)pow(10, n);
	return m;
}
void main()
{
	double m;
	int n;
	m=123.456;
	n=2;
	printf("%lf", fun(m, n));
}