#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Print(unsigned n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);     
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	Print(num);  
//	return 0;
//}
//
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')           //�ǵݹ�
//	{
//		count++;        
//		str++;
//	}
//	return count;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}  
//
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);             //�ݹ�
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	//int i = 0;
//	//int ret = 1;
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret = ret*i;
//	//}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n - 2; i++) 
		{  //ѭ�����޵�ȷ�������5��쳲���������Ҫ����3���ۼӣ����Դ���n-2�Ĺ�ϵ
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	printf("������Ҫ��ĵڶ��ٸ�쳲���������");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}

//int main()
//{
//	//������һ����ͬ����Ԫ�صļ���
//	//����Ĵ���
//	//Ԫ�ص�����  ������ [�����С - ����]
//	int arr[100];
//	char ch[20];
//	return 0;
//}

//int main()
//{
//	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 1, 2, 3 };
//	char arr3[] = { 'a', 'b', 'c' };*/
//	char arr4[] = { 'a', 98, 'b' };
//	char arr5[] = "abc";
//	printf("%d\n",sizeof(arr4));
//	printf("%d\n", sizeof(arr5));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	             //0  1  2  3  4  5  6  7  8  9  
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//0  1  2  3  4  5  6  7  8  9  
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int *p = arr;
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5} };          //�п���ʡ��
//	return 0;
//}
//
//#include <stdlib.h>
//char* reverse_string(char *str)
//{
//		if (*str != '\0')
//		{
//			str++;
//			reverse_string(str);
//			printf("%c ", *(str - 1));
//		}
//		return str;
//}
//int main()                                    //��Hello����
//{
//	char arr[] = "Hello";
//	char* ret = reverse_string(arr);
//	printf("\n");
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);            //����λ���ϵ�����֮��
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	printf("������һ������");
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("���֮��Ϊ��%d\n", sum);
//	return 0;
//}

//int my_adc(int n, int k)
//{
//	//int ret = 1;
//	//int i = 0;
//	//while(i!=k)
//	//{
//	//	ret *= n;
//	//	i++;
//	//}
//	//return ret;
//	if (k == 1) {
//		return n;
//	}
//	else {
//		return n*my_adc(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("����n��k��ֵ��");
//	scanf("%d%d", &n,&k);
//	ret = my_adc(n, k);
//	printf("%d^%d = %d\n", n, k, ret);
//
//	return 0;
//}