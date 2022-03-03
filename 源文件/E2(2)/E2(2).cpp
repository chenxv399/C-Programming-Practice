#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)
unsigned fun(unsigned w)
{
	int n = 0, t;
	int m = w;
	while (w)
	{
		n++;
		t = w;
		w /= 10;
	}
	w = m - (t * pow(10, n - 1));
	return w;
}
void main()
{
	unsigned w;
	scanf("%d", &w);
	fun(w);
	printf("%d", w);	
}
