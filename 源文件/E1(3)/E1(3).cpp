#include<stdio.h>
#pragma warning(disable : 4996)
void func(int *a, int *b)
{
	int c;
	c = *a;
	*a =*b;
	*b = c;
	return;
	
}
int main()
{
	
		int *p,*q;
		int x=3, y=5;

		p = &x;
		q = &y;
		func(&x, &y);
		printf("%d %d", x, y);
	
}