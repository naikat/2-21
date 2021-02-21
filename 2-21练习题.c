//写代码将三个数按从大到小输出


#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int e = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (b > a)
	{
		e = a;
		a = b;
		b = e;
		if (c > a)
		{
			e = a;
			a = c;
			c = e;
			if (c > b)
			{
				e = b;
				b = c;
				c = e;


			}

		}


	}
	

	printf("%d %d %d\n", a, b, c);



	return 0;
}


 //打印3的倍数  写一个代码打印1-100之间所有3的倍数数字

#include<stdio.h>

int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a%3 == 0)
			printf("%d\n", a);
	}
	return 0;
}


  //最大公约数  给出两个数 求这两个数的最大公约数


   //辗转相除法  m/n = e 余 s  e/s =d 无余数 则 s是 m n 的最大公约数
   // 如   24/18=1....6  18/6=3   6 是 24 18的最大公约数

#include<stdio.h>

int main()
{
	int a = 24;
	int b = 18;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (c=a % b)//没有余数 即 假 直接退出循环
	{
		//c = a % b;
		a = b;
		b = c;


	}
	printf("%d\n",b);
	return 0;
}



 // 打印闰年 打印 1000-2000年之间的闰年
      //判断year是否为闰年
      //1.能被4整除并且不能被100整除是闰年
		//2.能被400整除是闰年


#include<stdio.h>

int main()
{
	int year = 0;
	int b = 0;
	for (year = 1000; year <= 2000; year++)
	{
		/*if(year%4==0 && year%100!=0)
		{
			printf("%d ", year);
			b++;

		}
		else if(year%400==0)
		{
			printf("%d ", year);
			b++;
		}*/

		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
				b++;

		}

	}
	printf("\nb = %d\n", b);
	return 0;
}


  //打印素数 写一个代码打印100-200之间的素数   素数：只能被1 和本身 整除的 数

  //试除法


#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)// j=2  是排除1 外
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);

		}
	}
	printf("\ncount = %d", count);
	return 0;
}



   // i=a*b 如 16=2*8=4*4     一个数 不是素数 一定能写成 i=a*b   a或者b 中至少有一个数字是 <= 开平方i


#include<stdio.h>
#include<math.h>


int main()
{
	int i = 0;
	int count = 0;
	// sqrt -- 开平方的数学库函数
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}

		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);

		}
	}
	printf("\n count = %d\n", count);
	return 0;
}
