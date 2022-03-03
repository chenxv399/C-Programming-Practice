#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
int fun(int num)
{
	
	int cnt = 0, N = 100000;
	int* number = new int[N]; /*定义一个数列int number[N]*/
	while (num != 0)
	{
		number[cnt++] = num % 10;
		num /= 10;
	}
	return num;
}
int main()
{
	int a = 252;
	int b;
	b = fun(a);
	printf("%d", b);
	int c = 202;
	int d;
	d = fun(c);
	printf("%d", d);
	return 0;
}