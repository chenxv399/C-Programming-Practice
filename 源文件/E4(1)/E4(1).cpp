# include<stdio.h>
#pragma warning(disable : 4996)
void sort(int* a, int n)
{
	int i, j, t, m;
	for (i = 0; i < n - 1; i++) 
	{
		m = i;
		for (j = i + 1; j < n; j++)
		{
			if (*(a + j) < *(a + m))
				m = j;
		}
		if (i != m)
		{
			t = *(a + i);
			*(a + i) = *(a + m);
			*(a + m) = t;
		}
	}
}
void main()
{
	int i, n, a[100];
	printf("�������������n:");
	scanf("%d", &n);
	printf("������%d��Ԫ��:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, n);
	for (i = 0; i < n; i++)
		printf("%-7d", a[i]);
}
