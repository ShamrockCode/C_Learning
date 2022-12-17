#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//调整奇偶数的顺序
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//找偶数
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//找奇数
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//递归和非递归实现n的阶乘

//递归实现
//int Ret(int n)
//{
//	if (n < 2)
//		return 1;
//	else
//		return n * Ret(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Ret(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归实现
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	int tmp = 1;
//	for (i = 1; i <= n; i++)
//	{
//		tmp *= i;
//	}
//	printf("%d\n", tmp);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str) > 1)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char str[] = { 0 };
//	gets(str);
//	reverse_string(str);
//	puts(str);
//	return 0;
//}

