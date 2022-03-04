#include<stdio.h>
void fun(char* p)
{
	char* s;
	while (*p)
	{
		if (*p == ' ')
		{
			s = p;
			while (*s)
			{
				*s = *(s + 1);
				s++;
			}
		}
		else
			p++;
	}
}
void main()
{
	char a[100];
	gets_s(a);
	fun(a);
	printf(a);
}
