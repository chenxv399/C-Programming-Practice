#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int* s, int m)
{
	int low = 0, high, mid;
	high = sizeof(s) / 2;
	mid = (low + high) / 2;
	while (1)
		if (m > s[mid])
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else
			if (m < s[mid])
			{
				high = mid - 1;
				mid = (low + high) / 2;
			}
			else
			{
				return mid;
			}
	return -1;
}
void main()
{
	int a[100];
	int b, i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &b);
	printf("%d", fun(a, b));
}
