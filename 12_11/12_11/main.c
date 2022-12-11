#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//输入
//	int arr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//判断
//	int flag = 1;//默认是上三角
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	//输入数据
	int arr1[10][10];
	int arr2[10][10];
	int i = 0;
	int j = 0;
	//第一个数组
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}

	}

	//第二个数组	
	int flag = 1;//默认两个矩阵相等
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
			if (arr1[i][j] != arr2[i][j])
			{
				flag = 0;
				goto end;
			}
		}

	}

	//比较

end:
	if (flag == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}