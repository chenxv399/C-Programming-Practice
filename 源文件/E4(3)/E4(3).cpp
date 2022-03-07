#include<stdio.h>
#include<string.h>
#define N 80
void fun(char* a)
{
	int i, j, n;
	char ch;
	n = strlen(a);
	for (i = 1; i < n; i++)
	{
		ch = a[i];
		j = i - 1;
		while ((j >= 0) && (ch < a[j]))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = ch;
	}
}
void main()
{
	char a[N];
	gets_s(a);
	fun(a);
	puts(a);
}
