#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//+  -  *  /  %
//	//����
//	//int a = 7 / 2;
//	//double a = 7.0 / 2;
//	//printf("%lf\n", a);
//	int a = 7 % 2;
//	printf("%d\n", a);
//	return 0;
//}

//   >>  
//��������  �ұ߶��� ��߲�ԭ����λ
//�߼�����  �ұ߶��� ��߲�0

//int mian()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;   //��2����λ��
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//
//	int c = a | b;  //��2����λ��
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//
//	int c = a^b;  //��2�������
//	//�����ͬΪ0������Ϊ1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//��a , b��������
//	printf("a = %d  b = %d", a, b);
//	//int c = 0;
//	/*c = a;
//	a = b;
//	b = c;*/
//	a = a^b;
//  b = a^b;
//  a = a^b;
//
//	printf("a = %d  b=%d ", a, b);
//
//	return 0;
//
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int num = 0;
//	int count = 0;
//	num = m^n;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	int num = 15;
//	for (i = 32; i >= 1; i--)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	  //��a , b��������
	printf("a = %d  b = %d", a, b);
	printf("\n");
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d  b = %d \n", a, b);
	return 0;
}