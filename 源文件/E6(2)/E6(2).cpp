#include<stdio.h>
#pragma warning(disable : 4996)
void fun(int n)
{
	if (n / 10 == 0)
	{
		putchar('0' + n % 10);
	}
	else
	{
		fun(n / 10);
		putchar('0' + n % 10);
	}
}
void main()
{
	int m;
	scanf("%d", &m);
	fun(m);
}
