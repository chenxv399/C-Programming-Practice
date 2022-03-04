#include<stdio.h>
#pragma warning(disable : 4996)
int fun(char* s, char k)
{
	int n;
	n = 0;
	while (*s)
	{
		if (*s == k)
			n++;
		s++;
	}
	return n;
}
void main()
{
	int s;
	char a[100], k;
	gets_s(a);
	scanf("%c", &k);
	s = fun(a, k);
	printf("%d", s);
}
