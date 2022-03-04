#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int k, i;
	while (gets_s(a))
	{
		k = strlen(a);
		a[0] -= 32;
		for (i = 0; i < k; i++)
		{
			if (a[i] == ' ')
				a[i + 1] -= 32;
			printf("%c", a[i]);
		}
		printf("\n");
	}
}
