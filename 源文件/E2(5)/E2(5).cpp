#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	double k, d, s = 1;
	printf("k是小于9的奇数:");
	scanf("%lf", &k);
	while (k > 0)
	{
		d = k;
		s = 1;
		while (d)
		{
			s *= d;
			d--;
		}
		printf("%lf\n", s);
		k -= 2;
	}
}
