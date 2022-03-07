#include<stdio.h>
int fun(char* a, char* b)
{
	char* p;
	int n = 0;
	while (*a)
	{
		p = b;
		if (*a == *p)
		{
			while (*a == *p)
			{
				a++;
				p++;
				if (*p == '\0')
				{
					n++;
				}
			}
		}
		else
		{
			a++;
		}
	}
	return n;
}
void main()
{
	char a[100], b[20];
	gets_s(a);
	gets_s(b);
	printf("%d\n", fun(a, b));
}
