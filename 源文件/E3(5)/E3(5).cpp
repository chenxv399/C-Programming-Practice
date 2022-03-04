#include<stdio.h>
void fun(char* a, char* b)
{
	int i;
	while (*a)
	{
		for (i = 0; i < 3; i++)
		{
			*b = *a;
			if (*a = '\0')
				break;
			a++;
			b++;
		}
		while (*a != '\0')
		{
			*b = ' ';
			b++;
			break;
		}
	}
}
void main()
{
	char a[100], b[100];
	gets_s(a);
	fun(a, b);
	puts(b);
}
