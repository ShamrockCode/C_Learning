#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������ż����˳��
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//��ż��
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//������
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


//�ݹ�ͷǵݹ�ʵ��n�Ľ׳�

//�ݹ�ʵ��
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
//�ǵݹ�ʵ��
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��

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

