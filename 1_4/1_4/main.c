#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���һ��С�����жϻ�����С�˴洢�ֽ���
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//
//	int a = 0;
//	int* pa = &a;
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//	return 0;
//}



//********************************************
void print1(int arr[3][4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void print2(int(*p)[4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	print1(arr, 3, 4);
	print2(arr, 3, 4);
	return 0;
}
//***********************************************************

int main()
{

	return 0;
}