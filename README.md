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

# 实验3：逻辑错误修正与字符串处理
任务1：程序中逻辑错误的发现与修正
1. 目的
    能通过调试工具发现并修正逻辑错误，熟练使用单步执行、设置断点等调试手段，通过观察内存理解指针操作。
2. 步骤
(1) 观察教师对多种调试过程的演示。
(2) 学生通过调试发现并修正程序中的逻辑错误。
 
任务2：设计程序解决字符串处理问题
1. 目的
能熟练应用函数、指针设计程序并解决有一定复杂性的字符串处理问题。
2. 步骤
对于任务中的每个问题，分析并设计解题思路，合理设置变量，合理设计函数参数，编制程序，通过调试工具纠错，运行得到正确结果。
3. 内容：基本问题程序设计3

* （1）编写一个函数len，其功能是计算出一个字符串中含有的所有字符个数（不使用库函数strlen）。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
int len(char* s)
{
	int n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return n;
}

void main()
{
	char s[100];
	gets_s(s);
	len(s);
	printf("%d\n", len(s));
}
```
* （2）编写函数fun，函数的功能是：计算一个字符串s中的所含有的指定字符的个数，返回此值。例如，输入字符串"Thisisastring"，被查找字符为'i'，则应输出3。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#pragma warning(disable : 4996)
int fun(char* s, char k)
{
	int n;
	n = 0;
	while (*s)
	{
		if (*s == k)
			n++;
		s++;
	}
	return n;
}
void main()
{
	int s;
	char a[100], k;
	gets_s(a);
	scanf("%c", &k);
	s = fun(a, k);
	printf("%d", s);
}
```
* （3）编写程序，读入一个英文文本行，将其中每个单词的第一个字母改成大写，然后输出此文本行（这里的“单词”是指由空格隔开的字符串）。编写主函数，输入输出在主函数中进行。
```
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
```
* （4）编写函数fun，其功能是删除一个字符串中的所有空格。例如，输入字符串"This  is  a  string"，则应输出"Thisisastring"。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
void fun(char* p)
{
	char* s;
	while (*p)
	{
		if (*p == ' ')
		{
			s = p;
			while (*s)
			{
				*s = *(s + 1);
				s++;
			}
		}
		else
			p++;
	}
}
void main()
{
	char a[100];
	gets_s(a);
	fun(a);
	printf(a);
}
```
* （5）编写函数fun，函数fun 的功能是：将字符串a中的所有字符复制到字符串b中，要求每复制三个字符之后插入一个空格。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
void fun(char* a, char* b)
{
	int i;
	while (*a)
	{
		for (i = 0; i < 3; i++)
		{
			*b = *a;
			if (*a = '\0')
				break;
			a++;
			b++;
		}
		while (*a != '\0')
		{
			*b = ' ';
			b++;
			break;
		}
	}
}
void main()
{
	char a[100], b[100];
	gets_s(a);
	fun(a, b);
	puts(b);
}
```
* （6）编写函数，函数fun的功能是：在字符串str中找出ASCII码值最大的字符，将其放在第一个位置上，并将该字符前的原字符向后顺序移动。编写主函数，输入输出在主函数中进行。
```
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
```
* （7）编写函数，函数fun 的功能是：首先把b所指字符串中的字符按逆序存放，然后将a所指字符串中的字符和b所指字符串中的字符，按排列的顺序交叉合并到c所指数组中，过长的剩余字符接在c所指数组的尾部。例如，当a所指字符串中的内容为“abcdefg”，b所指字符串中的内容为“1234”时，c所指数组中的内容应该为“a4b3c2d1efg”；而当a所指字符串中的内容为“1234”，b所指字符串中的内容为“abcdefg”时，c所指数组中的内容应该为“1g2f3e4dcba”。 编写主函数，输入输出在主函数中进行。
```
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
```


# 实验4：代码规范性及数组、指针、函数应用
任务1：了解代码规范性的一般要求
1. 目的
    了解代码规范性的一般要求，并能够在程序设计中加以初步运用。
2. 步骤
(1) 根据教师讲解，了解代码规范性一般要求。
(2) 自行查找资料，通过实例了解代码规范性的具体体现。

 
任务2：不同的排序方法及使用较复杂的控制结构、数组、指针等解决操作内存的问题
1. 目的
（1）能通过查阅资料，掌握不同排序思想，并设计程序实现。
（2）能熟练应用函数、指针、数组及较复杂的控制结构设计程序并解决有一定复杂性的问题。
（3）能使用指针等操作内存。
2. 步骤
对于任务中的每个问题，分析并设计解题思路，合理设置变量，合理设计函数参数，通过指针操作内存，编制程序，运行得到正确结果。
3. 内容：基本问题程序设计4
* （1）用选择排序法对数组a的元素从小到大排序。例如，输入2 5 4 1 6 2 7 3 2 9 4，则应输出1 2 2 2 3 4 5 6 7 9。
```
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
	printf("请输入数组个数n:");
	scanf("%d", &n);
	printf("请输入%d个元素:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, n);
	for (i = 0; i < n; i++)
		printf("%-7d", a[i]);
}
```
* （2）设计程序，调用函数fun，实现用冒泡法对6个字符串按由小到大的顺序进行排序。
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int maopao(int* a, int size)
{
	int i, j, t;
	if (size <= 0) return -1;
	if (a == NULL) return -1;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	return 0;
}

int main(int argc, const char* argv[])
{
	int i, ret, b[10] = { 0 };
	printf("从终端输入10个数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("数组的内容:");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	printf("数组升序排列后:");
	ret = maopao(b, 10);
	if (ret < 0)
	{
		printf("maopao is error\n");
		exit(-1);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	return 0;
}
```
* （3）编写程序调用函数fun，函数fun的功能是：利用插入排序法对字符串中的字符按从小到大的顺序进行排序。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
#include<string.h>
#define N 80
void fun(char* a)
{
	int i, j, n;
	char ch;
	n = strlen(a);
	for (i = 1; i < n; i++)
	{
		ch = a[i];
		j = i - 1;
		while ((j >= 0) && (ch < a[j]))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = ch;
	}
}
void main()
{
	char a[N];
	gets_s(a);
	fun(a);
	puts(a);
}
```
* （4）编写一个函数，其功能是统计一个子字符串在另一个字符串中出现的次数。例如，假定输入的字符串为"this is a string"，子字符串为"is"，则应输出2。编写主函数，输入输出在主函数中进行。
```
#include<stdio.h>
int fun(char* a, char* b)
{
	char* p;
	int n = 0;
	while (*a)
	{
		p = b;
		if (*a == *p)
		{
			while (*a == *p)
			{
				a++;
				p++;
				if (*p == '\0')
				{
					n++;
				}
			}
		}
		else
		{
			a++;
		}
	}
	return n;
}
void main()
{
	char a[100], b[20];
	gets_s(a);
	gets_s(b);
	printf("%d\n", fun(a, b));
}
```
* （5）N个有序整数已放在一维数组中。采用函数利用折半查找算法查找整数m在数组中的位置。若找到返回其下标值；反之，返回-1。编写主函数实现函数调用。
```
#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int* s, int m)
{
	int low = 0, high, mid;
	high = sizeof(s) / 2;
	mid = (low + high) / 2;
	while (1)
		if (m > s[mid])
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else
			if (m < s[mid])
			{
				high = mid - 1;
				mid = (low + high) / 2;
			}
			else
			{
				return mid;
			}
	return -1;
}
void main()
{
	int a[100];
	int b, i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &b);
	printf("%d", fun(a, b));
}
```
* （6）编写函数int*  fun(char* st)，其中st是仅由字符a、b和c组成的字符串。函数的功能是：统计字符串st中’a’、’b’和’c’的个数并分别存入不同的内存区，带回内存区的首地址。编写主函数实现函数调用。
```
#include<stdio.h>
int* fun(char* st, int a[3])
{
	while (*st)
	{
		if (*st == 'a')
		{
			a[0]++;
		}
		if (*st == 'b')
		{
			a[1]++;
		}
		if (*st == 'c')
		{
			a[2]++;
		}
		st++;
	}
	return a;
}
void main()
{
	char a[100];
	int b[3] = { 0,0,0 };
	int i;
	int* p;
	gets_s(a);
	p = fun(a, b);
	for (i = 0; i < 3; i++)
		printf("%d,", *p++);
}
```
# 实验5：多维数组与文件操作
任务1：以指针操作数组及基本矩阵运算
任务2：文件操作 
1. 目的
（1）能灵活采用指针操作数组。
（2）能采用二维数组，解决基本矩阵运算问题。
（3）能进行基本文件操作
2. 步骤
对于任务中的每个问题，分析并设计解题思路，合理设置变量，设计数组，合理设计函数参数，编制程序，运行得到正确结果。
3. 内容：基本问题程序设计5

* （1）编写函数，其功能是：实现矩阵（3行3列）的转置（即行列互换）。例如，原矩阵为:[1 2 3 4 5 6 7 8 9]
 ，则转置后的矩阵为：[1 4 7 2 5 8 3 6 9] 。然后编写主函数调用它
```
#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	int a[3][3], i, j;
	for (i = 0; i < 9; i++)
		scanf("%d", &a[0][0] + i);
	for (i = 0; i < 9; i++)
	{
		printf("%2d", a[0][0] + i);
		if (i % 3 == 2)
			printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d", a[j][i]);
			if (j == 2)
				printf("\n");
		}
	}
}
```
* （2）编写函数void  fun ( int  aa[ ], int  x, int  *n )，它的功能是：删除数组aa中所有与x相等的元素，数组元素个数由n传入。编写主函数，输入输出在主函数中进行。
```
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
```
* （3）编函数void  fun(int  *a, int  *b)，它的功能是：求出1到100之内被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。编写主函数，输入输出在主函数中进行。
```
#include <stdio.h> 
void fun(int* a, int* b)
{
	int i;
	for (i = 1; i <= 100; i++)
		if (i % 7 == 0 || i % 11 == 0)
		{
			*a = i;
			a++;
			(*b)++;
		}
}

int main()
{
	int i, n = 0;
	int m[100];
	fun(m, &n);
	printf("%d\n", n);
	for (i = 0; i < n; i++)
		printf("%d", m[i]);
	return 0;
}
```
* （4）编写函数int fun (int lim, int aa[MAX] )，该函数的功能是求出小于lim的所有素数并放在aa数组中，该函数返回所求出素数的个数。然后编写主函数调用它。
```
#include<stdio.h>
#pragma warning(disable : 4996)
int fun(int lim, int aa[100])
{
	int i, MAX = 0, j;
	for (i = 0; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (i == j + 1)
			{
				aa[MAX] = i;
				MAX++;
			}
		}
	}
	return MAX;
}
void main()
{
	int lim, aa[100];
	scanf("%d", &lim);
	printf("%d", fun(lim, aa));
}
```
* （5）输入一个3行3列矩阵的所有元素，然后输出对角线元素之和。
```
#include<stdio.h>
#pragma warning(disable : 4996)
void main()
{
	int a[3][3];
	int i, j, s = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < 3; i++)
	{
		s += a[i][i];
	}
	printf("%d", s);
}
```
* （6）信息加密。编写加密程序，对用户从键盘输入的信息（不少于20个单词）以学号尾号为秘钥进行加密（例：学号尾号为3，输入信息I am z……，则密文为L dp c……，尾号为0则秘钥为10），将密文存入文本文件。

* （7）解密。编写程序，将已加密的文件读出并解密后存入另一文件。


# 实验6：递归与链表
任务1：递归函数设计
任务2：链表操作
1. 目的
（1）能够使用递归方法设计函数。
（2）能设计较复杂的数据结构，实现链表操作，并解决与内存应用相关的问题。
2. 步骤
对于任务中的每个问题，分析并设计解题思路，合理设置结构体，尝试动态分配内存，编制程序，实现链表操作，运行程序得到正确结果。
3. 内容：基本问题程序设计6

* （1）请编写函数int fun(double a[ ], int k, int m, double x)，它的功能是：用递归方法在数组a中查找x是否出现，其中数组a的元素已按由大到小的次序排序，k和m是数组的最小和最大下标，函数采用二分查找算法，若找到则返回1，否则返回0。然后编写主函数调用它。
```
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node* next;
}NODE;
#define LEN sizeof(NODE)
NODE* setup()
{
    NODE* head = NULL, * p1, * p2;
    int n = 0;
    p2 = (NODE*)malloc(LEN);
    p1 = p2;
    scanf("%d", &p1->data);
    while (p1->data)
    {
        n++;
        if (n == 1)
        {
            head = p1;
        }
        else
        {
            p2->next = p1;
            p2 = p1;
        }
        p1 = (NODE*)malloc(LEN);
        scanf("%d", &p1->data);
    }
    p2->next = NULL;
    return head;
}

int main()
{
    NODE* p;
    p = setup();
    while (p)
    {
        printf("%d，", p->data);
        p = p->next;
    }
}
```
* （2）用递归法将一个整数n转换成字符串。例如，输入整数483，应输出字符串“483”。
```
#include<stdio.h>
#pragma warning(disable : 4996)
void fun(int n)
{
	if (n / 10 == 0)
	{
		putchar('0' + n % 10);
	}
	else
	{
		fun(n / 10);
		putchar('0' + n % 10);
	}
}
void main()
{
	int m;
	scanf("%d", &m);
	fun(m);
}
```
* （3）编写一个函数，函数fun的功能是：输入一个整数x，计算x的平方和立方。例如，输入10，则应输出a=10  a2=100  a3=1000。然后编写主函数调用它。
```
#include<stdio.h>
#pragma warning(disable : 4996)
void fun(int s)
{
	int i, a[2];
	a[0] = s * s;
	a[1] = s * s * s;
	for (i = 0; i < 2; i++)
		printf("%d\n", a[i]);
}
void main()
{
	int s;
	scanf("%d", &s);
	fun(s);
}
```
* （4）学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把分数最低的学生数据放在h所指的数组中，注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。编写主函数，输入输出在主函数中进行。
```
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
```
* （5）建立一个单向链表，链表中的每个结点有一个int类型的数据域，输入0时标志链表建立过程结束。例如，输入1  2  3  4  0，则应输出1,2,3,4,。
```
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node* next;
}NODE;
#define LEN sizeof(NODE)
NODE* setup()
{
    NODE* head = NULL, * p1, * p2;
    int n = 0;
    p2 = (NODE*)malloc(LEN);
    p1 = p2;
    scanf("%d", &p1->data);
    while (p1->data)
    {
        n++;
        if (n == 1)
        {
            head = p1;
        }
        else
        {
            p2->next = p1;
            p2 = p1;
        }
        p1 = (NODE*)malloc(LEN);
        scanf("%d", &p1->data);
    }
    p2->next = NULL;
    return head;
}

int main()
{
    NODE* p;
    p = setup();
    while (p)
    {
        printf("%d，", p->data);
        p = p->next;
    }
}
```

# 实验7：应用程序设计基础
略

# 实验8：应用程序设计实践
任务：确定一个应用程序设计任务并实现
1. 目的
（1）能够设计结构体变量构造链表。
（2）能通过查阅资料构思有一定实用背景和规模的链表操作算法。
（3）能分析和评价所设计的解决方案及代码的质量。
（4）撰写符合规范的实验报告。
2. 步骤
(1) 教师讲解链表应用程序设计思路。
(2) 学生查阅资料，探索完善单链表实用程序设计思路。
(3) 学生根据前期查阅资料情况和个人兴趣，选择一个实用程序设计题目。
(4) 撰写实验报告。

3. 内容：应用程序设计（在下述任务中任选其一完成，也可自选类似题目，由导师批准后自行完成，撰写实验报告）
* （1）时钟模拟程序设计
设计要求：设计一个时钟表盘，能及时读取系统的时间，并根据当前时间计算并绘制出在时钟表盘上时钟时针、分针和秒针的具体位置，形成时钟运转动画。
* （2）计算器程序的设计
设计要求：实现一个计算器功能的程序。能够用C语言提供的图形库函数绘制计算器界面、基本的运算程序、计算界面数据数据、运算符定位和刷新功能。
* （3）五子棋对战游戏设计
设计要求：实现利用计算机评判两个人五子棋比赛游戏、用C语言提供的图形库函数实现绘制五子棋棋盘，实现五子棋规则评判算法。
* （4）单链表基本算法实现程序
设计要求：定义单链表数据结构、实现单链表的建立、销毁、查找、插入、删除、排序算法、利用单链表的算法实现多项式相加减应用。


 

 
