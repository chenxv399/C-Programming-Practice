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

* （3）编写程序调用函数fun，函数fun的功能是：利用插入排序法对字符串中的字符按从小到大的顺序进行排序。编写主函数，输入输出在主函数中进行。

* （4）编写一个函数，其功能是统计一个子字符串在另一个字符串中出现的次数。例如，假定输入的字符串为"this is a string"，子字符串为"is"，则应输出2。编写主函数，输入输出在主函数中进行。
	
* （5）N个有序整数已放在一维数组中。采用函数利用折半查找算法查找整数m在数组中的位置。若找到返回其下标值；反之，返回-1。编写主函数实现函数调用。

* （6）编写函数int*  fun(char* st)，其中st是仅由字符a、b和c组成的字符串。函数的功能是：统计字符串st中’a’、’b’和’c’的个数并分别存入不同的内存区，带回内存区的首地址。编写主函数实现函数调用。


# 未完待续
   
 

 
