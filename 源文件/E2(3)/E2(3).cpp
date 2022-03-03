#include<stdio.h>
#include<math.h>
long fun(long s)
{
	long n = 0, t1;
	long t=0;
	while (s)
	{
		s /= 10;
		t1 = s % 10;
		s /= 10;
		t += t1 * pow(10, n);
		n++;
	}
	return t;
}
void main()
{
	long s;
	s = 7654321;
	printf("t=%ld", fun(s));
}
