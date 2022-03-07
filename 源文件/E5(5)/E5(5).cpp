#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	int a[3][3];
	int i, j, s = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < 3; i++)
	{
		s += a[i][i];
	}
	printf("%d", s);
}
