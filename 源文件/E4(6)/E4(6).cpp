#include<stdio.h>
int* fun(char* st, int a[3])
{
	while (*st)
	{
		if (*st == 'a')
		{
			a[0]++;
		}
		if (*st == 'b')
		{
			a[1]++;
		}
		if (*st == 'c')
		{
			a[2]++;
		}
		st++;
	}
	return a;
}
void main()
{
	char a[100];
	int b[3] = { 0,0,0 };
	int i;
	int* p;
	gets_s(a);
	p = fun(a, b);
	for (i = 0; i < 3; i++)
		printf("%d,", *p++);
}
