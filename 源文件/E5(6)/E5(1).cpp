#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	int a[3][3], i, j;
	for (i = 0; i < 9; i++)
		scanf("%d", &a[0][0] + i);
	for (i = 0; i < 9; i++)
	{
		printf("%2d", a[0][0] + i);
		if (i % 3 == 2)
			printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d", a[j][i]);
			if (j == 2)
				printf("\n");
		}
	}
}
