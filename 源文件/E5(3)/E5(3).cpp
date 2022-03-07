#include <stdio.h> 
void fun(int* a, int* b)
{
	int i;
	for (i = 1; i <= 100; i++)
		if (i % 7 == 0 || i % 11 == 0)
		{
			*a = i;
			a++;
			(*b)++;
		}
}

int main()
{
	int i, n = 0;
	int m[100];
	fun(m, &n);
	printf("%d\n", n);
	for (i = 0; i < n; i++)
		printf("%d", m[i]);
	return 0;
}
