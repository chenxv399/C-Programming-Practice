#include<stdio.h>
#pragma warning(disable : 4996)
void fun(int s)
{
	int i, a[2];
	a[0] = s * s;
	a[1] = s * s * s;
	for (i = 0; i < 2; i++)
		printf("%d\n", a[i]);
}
void main()
{
	int s;
	scanf("%d", &s);
	fun(s);
}
