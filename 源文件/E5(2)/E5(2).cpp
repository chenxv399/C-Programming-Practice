#include<stdio.h>
#pragma warning(disable : 4996)
void fun(int aa[], int x, int* n)
{
    int i, j;
    for (i = 0; i < *n; i++)
    {
        if (aa[i] == x)
        {
            for (j = i; j < *n - 1; j++)
                aa[j] = aa[j + 1];
            (*n)--;
            i--;
        }
    }
}
void main()
{
    int a[100], x;
    int n, i;
    printf("Please enter the number of array elements:");
    scanf("%d", &n);
    printf("Please enter the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Please enter the deleted elements:");
    scanf("%d", &x);
    fun(a, x, &n);
    for (i = 0; i < n; i++)
        printf("%2d", a[i]);
}
