# C-Programming-Practice
C语言程序设计实践

>本项目旨在帮助中国大学计算机专业学生完成C语言计算机设计基础实践课程，给予学生项目开发灵感及经验，便于学生更快更好地完成C语言程序设计实践报告！

>特别感谢本项目部分源码来源及灵感来源 CSDN大神 GodOuO!!!
>引用原网址  https://blog.csdn.net/GodOuO/article/details/104051814

>项目所有源码都已上传在该项目中，供各位借鉴参考。但请一定不要直接下载后上交作业！！！复制代码后请至少检查一遍，因为部分源码中可能会有本人姓名等信息残留！

>因本人也是学生，部分源码可能会有错误，也恳请各位批评指正谅解。

# C语言程序设计实践

>本项目所有源文件开发环境为 Visual Studio 2022

# 实验一：工具与语法训练

任务1：工具与环境的使用
1. 目的
    选择并掌握至少一种C语言程序设计工具的基本用法，了解环境提供的一般性功能。
2. 步骤
(1) 根据教师对一种工具的演示，以及对其他工具的简要说明，查阅资料，分析、比较和选择一种开发工具。
(2) 自行查找、下载和安装选择的开发工具，也可以使用系统已安装的工具。
(3) 查阅资料，运行环境，利用小程序了解环境的使用方法。
 
任务2：基本问题程序设计训练
1. 目的
    熟练运用选定环境实现程序的编辑、编译和运行，具备基本的程序纠错能力，排除一般性语法障碍。
2. 步骤
    对于任务中的每个问题，分析并设计解题思路，编制程序，通过观察和调试工具纠错，运行得到正确结果。
3. 内容：基本问题程序设计1

* (1)	编写一个函数fun，然后设计主函数调用函数fun。函数fun的功能是：求两数平方根之和，作为函数值返回。例如：输入12和20，输出结果为： y = 7.936238。

```
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
float fun(int a, int b)
{
	float c;
	c = sqrt(a) + sqrt(b);
	return c;
}
int main()
{
	int a = 12, b = 20;
	float c;
	c = fun(a, b);
	printf("%f", c);
	return 0;

}
```

* (2)	编写一个函数fun，然后设计主函数调用函数fun。函数fun的功能是：计算正整数num的各位上的数字之积。例如，若输入：252，则输出应该是：20。若输入：202，则输出应该是：0。

```
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
```

* (3)	编写一个函数fun，然后设计主函数调用函数fun。函数fun的功能是：通过某种方式实现两个变量值的交换。例如变量a中的值原为5，b中的值原为3，程序运行后a中的值为3，b中的值为5。编写主函数，输入输出在主函数中进行。

```
#include<stdio.h>
#pragma warning(disable : 4996)
void func(int *a, int *b)
{
	int c;
	c = *a;
	*a =*b;
	*b = c;
	return;
	
}
int main()
{
	
		int *p,*q;
		int x=3, y=5;

		p = &x;
		q = &y;
		func(&x, &y);
		printf("%d %d", x, y);
	
}
```

* (4)	编写一个函数fun，然后设计主函数调用函数fun。函数fun的功能是：求出两个非零正整数的最大公约数（考虑递归和非递归两种方法,任选一种实现），并作为函数值返回。再设计一个函数，函数的功能是计算两个非零正整数的最小公倍数。

```
#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int a, int b)
{
	int r, temp;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return(b);
}
int main()
{
	int n, m, a, p;
	scanf("%d%d", &n, &m);
	printf("n=%d m=%d\n\n", n, m);
	a = fun(n, m);
	printf("最大公约数是%d\n", a);
	p = m * n / a;
	printf("最小公倍数是%d", p);
}
```

* (5)	用下述公式求π的近似值，直到最后一项的绝对值小于指定的数（参数num）为止:
 ≈1- + - +…例如，若输入值为0.0001，则程序的输出为：3.1414。
 
 ```
 #include<stdio.h>
#include<math.h>
int main()
{
	int s;
	float n, t, pi;
	t = 1.0;
	pi = 0;
	n = 1.0;
	s = 1;
	while (fabs(t) >= 1e-6)
	{
		pi = pi + t;
		n += 2.0;
		s = -s;
		t = s / n;
	}
	pi = pi * 4;
	printf("pi=%f\n", pi);
}
```

# 实验2：程序调试技术、程序组织与问题求解
任务1：调试的基本技术
1. 目的
    掌握基本调试方法，在发现并修正语法错误的基础上，通过单步执行、设置断点等调试手段，学会观察变量的赋值情况，以及函数参数的传递情况。
2. 步骤
(1) 根据教师对调试工具与调试的演示，学会单步执行、设置断点等方法。
(2) 通过开发工具的调试窗口，观察变量赋值情况以及函数参数的传递情况。
(3) 查阅资料，了解更多调试方法，利用小程序掌握调试环境的使用方法。

 
任务2：程序组织技术与一般性数学问题求解
1. 目的
  熟练运用选定环境实现程序的编辑、编译、调试和运行，具备通过调试巩固和验证语法知识的能力，并能够通过调试发现逻辑错误；能熟练应用函数、模块和流程控制技术组织程序并解决有一定复杂性的数学问题。
2. 步骤
  对于任务中的每个问题，分析并设计解题思路，编制程序，通过观察和调试工具纠错，掌握函数参数传递规律，运行得到正确结果。
3. 内容：基本问题程序设计2

* (1)	编写函数float  fun(float  x, int  m)，它的功能是：将浮点数x保留m位小数（m不大于6），第m+1位四舍五入。例如，输入123.456，保留2位小数应输出123.46（或123.459999）。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)
double fun(double m, int n)
{
	m *= pow(10, n);
	if (m - (int)(m) >= 0.5)
		m++;
	else
		m = m - (m - (int)(m));
	m = (int)m / (double)pow(10, n);
	return m;
}
void main()
{
	double m;
	int n;
	m=123.456;
	n=2;
	printf("%lf", fun(m, n));
}
```
* (2)	请编写一个函数unsigned fun ( unsigned w ), w是一个大于10的无符号整数，若w是n (n≥2)位的整数，函数求出w的后n-1位的数作为函数值返回。编写主函数，输入输出在主函数中进行。
```
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
```
* (3)	编写一个函数fun,函数fun的功能是：从低位开始取出长整型变量s中偶数位上的数，依次构成一个新数放在t中。例如，当s中的数为：7654321时，t中的数为：642。编写主函数，输入输出在主函数中进行。
```
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
```
* (4)	将十进制正整数转换成k进制（2k9）数的数字输出。例如，若输入8和2，则应输出1000（即十进制数8转换成二进制表示1000）。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int a,int b)
{
	int c = 0, d = 1;
	for (; a != 0;)
	{
		c = c + a % b * d;
		a = a / b;
		d = d * 10;
	}
	return 0;
}
int main()
{
	int a, b;
	a = 8;
	b = 2;
	fun(a, b);
	printf("%d", fun(a, b));
}
```
* (5)	求出1!、3!、5!、…、k!（k是小于9的奇数）。例如：若k=7，则应输出：1.00000  6.00000  120.00000  5040.00000。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
    double k,d,s=1;
	printf("k是小于9的奇数:");
	scanf("%lf",&k);
	while(k>0)
	{
	   d=k;
	   s=1;
	   while(d)
	   {
          s*=d;
		      d--;
	   }
	   printf("%lf\n",s);   
	   k-=2;
	}
}
```
* (6)	求 （此处a和n的值在1至9之间， 表示由n个a组成的整数）。例如，a=2，n=6，则以上表达式为：s=222222-22222-2222-222-22-2
   其和为：197532。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
     int i,j,s=0,t;
	 int a,n;
	 scanf("%d %d",&a,&n);
	 for(i=0;i<n;i++)
	 {
		 s+=a;
		 a=a*10;
	 }
	 t=s;
	 while(t)
	 {
		 t/=10;
	     s-=t;
	 }
	 printf("%d",s);
}
```
   
* (7)	编写一个函数float fun(float eps)，它的功能是：根据如下公式计算e的值：
 其中的eps是指定的精度。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
float fun(float eps)
{
	float e = 1;
	float i, j = 0, s = 1;
	for (i = 1; 1 / i > eps; i++)
	{
		i = j;
		while (j)
		{
			s *= j;
			j--;
		}
		e += 1 / s;
	}
	return e;
}
void main() {
	float k;
	scanf("%f", &k);
	printf("%f", fun(k));
}
```
* (8)	（选做）猜数游戏。编写游戏程序，由系统随机产生一个四位数，用户猜测，每猜一次系统给出猜对了几个数字，请考虑游戏结束与中途退出。
```
附：随机数产生：
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>

srand(time(NULL)); 随机数种子

z=rand();
```

```
我也不会 选做题自己想办法吧
```


# 未完待续

   
 

 
