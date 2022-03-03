#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	int i, j, s = 0, t;
	int a, n;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		s += a;
		a = a * 10;
	}
	t = s;
	while (t)
	{
		t /= 10;
		s -= t;
	}
	printf("%d", s);
}
