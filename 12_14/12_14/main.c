#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//输入一个整数数组，实现一个函数
//使得奇数在前，偶数在后

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//找偶数
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//找奇数
//		while ((left < right) && arr[right] % 2 == 0)
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
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	move(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//有序序列合并
//int main()
//{
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[3000];
//
//	int n;
//	int m;
//	scanf("%d %d", &n, &m);
//	//int arr1[n];
//	//int arr2[m];
//	//int arr3[n + m];
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//合并数组
//	i = 0;
//	int j = 0;
//	int  k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	if (i == n)
//	{
//		//把arr2中剩余的元素放在arr3中
//		while (j < m)
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	else
//	{
//		//把arr1中剩余的元素放在arr3中
//		while (i < n)
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//	}
//
//	for (k = 0; k < n + m; k++)
//	{
//		printf("%d ", arr3[k]);
//	}
//	return 0;
//}


//有序序列的判断
//int main()
//{
//	int arr[50];
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int flag1 = 0;//标记升序
//	int flag2 = 0;//标记降序
//
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i - 1] < arr[i])
//			flag1 = 1;
//		else
//			flag2 = 1;
//	}
//	if (flag1 + flag2 == 2)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}

//int Fib(int n)
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 0;
//	int i = 3;
//	if (n <= 2) 
//	{
//		return 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return f3;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。

//void reverse_str(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)  //首尾交换后，剩下的元素构成的数组，长度要大于1，才逆序，只剩下一个元素，表明其是最中间的元素，放在原位就好。
//	{
//		reverse_str(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char str[] = { 0 };
//	gets(str);
//
//	reverse_str(str);
//	puts(str);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘

//int Ret(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Ret(n - 1);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	////递归
//	//int tmp = Ret(n);
//	//printf("%d\n", tmp);
//
//	int tmp = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//	}
//	printf("%d\n", tmp);
//	return 0;
//}

