
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*������������չ����*/
/*��������ʱ������������������ֵ*/
/*
int main()
{
	int a = 0;
	int b = 0;
	printf("�����������������Զ��ŷָ���");
	scanf("%d,%d", &a, &b);
	a= a + b;//����֮��
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}
*/
/*��򷽷�*/
/*
int main()
{
	int a = 0;
	int b = 0;   
	printf("�����������������Զ��ŷָ���");
	scanf("%d,%d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}
*/
/*�ҳ�10�����е����ֵ*/
/*
int main() 
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		printf("�������%d������",i+1);
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
/*�����������Լ��*/
//����һ
/*
int main()
{
	int a ,b, c,i;
	printf("�����������������Զ��ŷָ���");
	scanf("%d,%d", &a, &b);
	//�ж�a,b�ĸ���
	if (a < b)
	{
		c = a;//c����С�Ŀ�ʼ����
	}
	else
	{
		c = b;
	}
	for (; c>0; c--)
	{
		//�ж�a,b�ܷ�ͬʱ������
		if (a%c == 0 & b%c == 0)
		{
			break;
		}
	}
	printf("���Լ����%d\n",c);
	system("pause");
	return 0;
}
*/
//������
/*շת�����*/
/*
int main()
{
	int a, b, c;
	printf("�����������������Զ��ŷָ���");
	scanf("%d,%d", &a, &b);
	while (c = a%b)
	{
		a = b;
		b = c;
	}
		printf("���Լ����%d\n",b);
	system("pause");
	return 0;
}
*/

/*����A������BԪ�صĽ���*/
/*
int main()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("����������a��%d������", i + 1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("����������b��%d������", i + 1);
		scanf("%d", &b[i]);
	}
	//���齻��
	for (i = 0; i < 10; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("�������a���飺");
	for (i = 0; i < 10; i++)
	{
		printf("%d��", a[i]);
	}
	printf("\n");
	printf("�������b���飺");
	for (i = 0; i < 10; i++)
	{
		printf("%d��", b[i]);
	}
	system("pause");
	return 0;
}
*/
//1��100�������г���9�Ĵ���
/*
��λ��i%10==9;
ʮλ��i/10==9;
*/
/*
int main()
{
	int count = 0;
	int i;
	for (i = 1; i < 100; i++)
	{
		//�жϸ�λ�Ƿ���0;
		if (i % 10 == 9)
		{
			count++;
		}
		//�ж�ʮλ�Ƿ���0;
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("1��100�������г���9�Ĵ���:%d\n", count);
	system("pause");
	return 0;
}
*/
/*��ӡͼ��*/
/*
�����ǣ�i=0;
����line=7;
��i�е�*����2*i-1;
��i�еĿո�����line-i;
�����ǣ�
��i�е�*����2*��line-i)-1;
��i�еĿո�����i
i<line;
*/
int main()
{
	int line = 0;
	int i, j;
	printf("������Ҫ��ӡͼ����������������");
	scanf("%d", &line);
	//��ӡ������
	for (i = 1; i <= line; i++)
	{
		//��ӡ�ո�
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
	//��ӡ������
	for (i = 1;i<line; i++)
	{
		//��ӡ�ո�
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