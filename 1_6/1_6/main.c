#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//pa������ָ��
//	int (*pa)[10] = &arr;
//	
//	//ָ������
//	char* ch[5];
//
//	//����ָ��
//	int (*pf)(const char*) = &my_strlen;
//
//	//����ָ������
//	int (*pfA[5])(const char*) = { &my_strlen };
//
//
//	return 0;
//}

////������----ʵ�������ļӼ��˳�
//void menu()
//{
//	printf("*****************************\n");
//	printf("******1.add     2.sub********\n");
//	printf("******3.mul     4.div********\n");
//	printf("******0.exit         ********\n");
//	printf("*****************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int(*pA)[10] = &arr;
//	//����ָ������
//	int (*pf[5])(int, int);
//
//	//ppf��ָ����ָ�������ָ��
//	int (*(*ppf)[5])(int, int) = &pf;
//
//
//	return 0;
//}

