#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int maopao(int* a, int size)
{
	int i, j, t;
	if (size <= 0) return -1;
	if (a == NULL) return -1;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	return 0;
}

int main(int argc, const char* argv[])
{
	int i, ret, b[10] = { 0 };
	printf("从终端输入10个数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("数组的内容:");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	printf("数组升序排列后:");
	ret = maopao(b, 10);
	if (ret < 0)
	{
		printf("maopao is error\n");
		exit(-1);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	return 0;
}
