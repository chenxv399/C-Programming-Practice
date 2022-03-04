#include<stdio.h>
#include<string.h>
void fun(char* a, char* b, char* c)
{
    int i, j, n, k;
    int p;
    char t;
    k = 0;
    j = strlen(b) - 1;
    for (i = 0; i < j; i++)
    {
        t = b[i];
        b[i] = b[j];
        b[j] = t;
        j--;
    }
    j = 0; p = 0;
    n = strlen(a) + strlen(b);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[j] != '\0')
            {
                c[k] = a[j];
                k++;
                j++;
            }
            if (a[j] == '\0')
            {
                c[k] = b[p];
                k++;
                p++;
            }
        }
        if (i % 2 == 1)
        {
            if (b[p] != '\0')
            {
                c[k] = b[p];
                k++;
                p++;
            }
            if (b[p] == '\0')
            {
                c[k] = a[j];
                j++;
                k++;
            }
        }
    }
}
void main()
{
    char c[100];
    char a[] = "abcdefg";
    char b[] = "1234";
    fun(a, b, c);
    puts(c);
    char f[100];
    char d[] = "1234";
    char e[] = "abcdefg";
    fun(d, e, f);
    puts(f);
}
