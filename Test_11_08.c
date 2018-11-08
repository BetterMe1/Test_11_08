
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*交换两数的扩展方法*/
/*不创建临时变量，交换两个数的值*/
/*
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：（以逗号分隔）");
	scanf("%d,%d", &a, &b);
	a= a + b;//两数之和
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}
*/
/*异或方法*/
/*
int main()
{
	int a = 0;
	int b = 0;   
	printf("请输入两个数：（以逗号分隔）");
	scanf("%d,%d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}
*/
/*找出10个数中的最大值*/
/*
int main() 
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个数：",i+1);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (max<=arr[i])
		{
			max = arr[i];
		}
	}
	printf("max:%d\n",max);
	system("pause");
	return 0;
}
*/
/*求两数的最大公约数*/
//方法一
/*
int main()
{
	int a ,b, c,i;
	printf("请输入两个数：（以逗号分隔）");
	scanf("%d,%d", &a, &b);
	//判断a,b哪个大
	if (a < b)
	{
		c = a;//c从最小的开始遍历
	}
	else
	{
		c = b;
	}
	for (; c>0; c--)
	{
		//判断a,b能否同时被整除
		if (a%c == 0 & b%c == 0)
		{
			break;
		}
	}
	printf("最大公约数：%d\n",c);
	system("pause");
	return 0;
}
*/
//方法二
/*辗转相除法*/
/*
int main()
{
	int a, b, c;
	printf("请输入两个数：（以逗号分隔）");
	scanf("%d,%d", &a, &b);
	while (c = a%b)
	{
		a = b;
		b = c;
	}
		printf("最大公约数：%d\n",b);
	system("pause");
	return 0;
}
*/

/*数组A和数组B元素的交换*/
/*
int main()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入数组a第%d个数：", i + 1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("请输入数组b第%d个数：", i + 1);
		scanf("%d", &b[i]);
	}
	//数组交换
	for (i = 0; i < 10; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("交换后的a数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%d，", a[i]);
	}
	printf("\n");
	printf("交换后的b数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%d，", b[i]);
	}
	system("pause");
	return 0;
}
*/
//1到100的整数中出现9的次数
/*
个位：i%10==9;
十位：i/10==9;
*/
/*
int main()
{
	int count = 0;
	int i;
	for (i = 1; i < 100; i++)
	{
		//判断个位是否是0;
		if (i % 10 == 9)
		{
			count++;
		}
		//判断十位是否是0;
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("1到100的整数中出现9的次数:%d\n", count);
	system("pause");
	return 0;
}
*/
/*打印图案*/
/*
上三角：i=0;
输入line=7;
第i行的*数：2*i-1;
第i行的空格数：line-i;
倒三角：
第i行的*数：2*（line-i)-1;
第i行的空格数：i
i<line;
*/
int main()
{
	int line = 0;
	int i, j;
	printf("请输入要打印图案的正三角行数：");
	scanf("%d", &line);
	//打印正三角
	for (i = 1; i <= line; i++)
	{
		//打印空格
		for(j = 1; j <= line - i;j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印倒三角
	for (i = 1;i<line; i++)
	{
		//打印空格
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (line - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}