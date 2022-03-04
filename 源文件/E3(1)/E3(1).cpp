#include<stdio.h>
#pragma warning(disable : 4996)
int len(char* s)
{
	int n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return n;
}

void main()
{
	char s[100];
	gets_s(s);
	len(s);
	printf("%d\n", len(s));
}
