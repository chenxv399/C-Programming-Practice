#include<stdio.h>
#pragma warning(disable : 4996)
float fun(float eps)
{
	float e = 1;
	float i, j = 0, s = 1;
	for (i = 1; 1 / i > eps; i++)
	{
		i = j;
		while (j)
		{
			s *= j;
			j--;
		}
		e += 1 / s;
	}
	return e;
}
void main() {
	float k;
	scanf("%f", &k);
	printf("%f", fun(k));
}
