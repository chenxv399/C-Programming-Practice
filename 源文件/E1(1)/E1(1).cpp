#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
float fun(int a, int b)
{
	float c;
	c = sqrt(a) + sqrt(b);
	return c;
}
int main()
{
	int a = 12, b = 20;
	float c;
	c = fun(a, b);
	printf("%f", c);
	return 0;

}