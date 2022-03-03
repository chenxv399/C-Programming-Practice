#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int a, int b)
{
	int r, temp;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return(b);
}
int main()
{
	int n, m, a, p;
	scanf("%d%d", &n, &m);
	printf("n=%d m=%d\n\n", n, m);
	a = fun(n, m);
	printf("最大公约数是%d\n", a);
	p = m * n / a;
	printf("最小公倍数是%d", p);
}
