#include<stdio.h>
void fun(char *p)
{
    char max;
    int i = 0, q;
    max = p[0];
    while (p[i])
    {
        if (max < p[i])
        {
            max = p[i];
            q = i;
        }
        i++;
    }
    while (q)
    {
        p[q] = p[q - 1];
        q--;
    }
    p[0] = max;
}
void main()
{
    char str[100];
    gets_s(str);
    fun(str);
    puts(str);
}