#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int a,int b)
{
	int c = 0, d = 1;
	for (; a != 0;)
	{
		c = c + a % b * d;
		a = a / b;
		d = d * 10;
	}
	return 0;
}
int main()
{
	int a, b;
	a = 8;
	b = 2;
	fun(a, b);
	printf("%d", fun(a, b));
}