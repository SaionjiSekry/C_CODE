#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = "#######";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	printf("\n");
//	return 0;
//}

//get_max(int x, int y)
//{
//	//return (x > y ? x : y);
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *pa, int *pb)     //ָ�� ָ��ַ
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������Ҫ����������������\n");
//	scanf("%d%d", &a, &b);
//
//	Swap(&a, &b);
//
//	printf("������Ϊ��%d %d\n", a, b);
//
//	return 0;
//}

//
//int is_prome(int n)
//{
//	//�ж�n�Ƿ�Ϊ����
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	//������
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	//for (i = 100; i < sqrt(n);i++)
//	{
//		if (is_prome(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//int is_leep_year(int y)                  
//{
//	int i = 0;
//	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))   //������жϷ���
//	{
//		y++;
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leep_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//������ʱ����ȥ�����������Ԫ�صĵ�ַ  &arr[0]
//	int ret = binary_search(arr, k,sz);
//	//���鴫�λᷢ�������������Ԫ�ص�ַ 
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}


//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int len = strlen("bit");
//	printf("len = %d\n", len);
//	//��ʽ����
//	printf("len = %d\n", strlen("bit"));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));   // printf�ķ���ֵ�� �ַ��ĸ��� 
//	//Ƕ�׵���
//	return 0;
//}

//int is_leep_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))   //������жϷ���
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("����������Ҫ��ѯ�����:>\n");
//	scanf("%d",&year);
//	if (is_leep_year(year) == 1)
//	{
//		printf("�����꣡\n");
//	}
//	else
//		printf("�������꣡\n");
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (j = 1; j <= 9; j++)                   //99�˷���
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int get_X(int i, int j)
//{
//	int num;
//	if (i != 0,j != 0 )           //99�˷���
//	{
//		num = i*j;
//		return num;
//	}
//	return 0;
//}
//
//int main()
//{
//	int a,b= 0;
//	printf("�����������ѯ���к��У�\n");
//	scanf("%d%d", &a, &b);
//	int ret = get_X(a, b);
//	printf("%d*%d = %d\n", a, b, ret);
//	return 0;
//}
int get_X(int num)
{
	int i, j = 0;
	for (j = 1; j <= num; j++)                          //99�˷���
	{
		for (i = 1; i <= j; i++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("����������Ҫ��ӡ��������:>\n");
	scanf("%d", &n);
	get_X(n);

	return 0;
}