#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//����
//	int arr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//�ж�
//	int flag = 1;//Ĭ����������
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
	//��������
	int arr1[10][10];
	int arr2[10][10];
	int i = 0;
	int j = 0;
	//��һ������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}

	}

	//�ڶ�������	
	int flag = 1;//Ĭ�������������
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

	//�Ƚ�

end:
	if (flag == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}