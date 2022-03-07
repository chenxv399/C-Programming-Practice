#include<stdio.h>
#define N 3
typedef struct Stu
{
    char NO[10];
    int score;
} Stu;
int fun(Stu* s, Stu* h)
{
    Stu min;
    min = s[0];
    int i, c = 0;
    for (i = 0; i < N; i++)
    {
        if (min.score > s[i].score)
            min = s[i];
    }
    for (i = 0; i < N; i++)
    {
        if (s[i].score == min.score)
        {
            *(h + c) = s[i];
            c++;
        }
    }
    return c;
}
int main()
{
    Stu s[N] = { {"181203101", 97}, {"181203102", 96}, {"181203103", 98} };
    Stu h[N];
    int num, i;
    num = fun(s, h);
    printf("The number is: %d\n", num);
    for (i = 0; i < num; i++)
    {
        printf("%s  %4d\n", h[i].NO, h[i].score);
    }
}
