#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//pa是数组指针
//	int (*pa)[10] = &arr;
//	
//	//指针数组
//	char* ch[5];
//
//	//函数指针
//	int (*pf)(const char*) = &my_strlen;
//
//	//函数指针数组
//	int (*pfA[5])(const char*) = { &my_strlen };
//
//
//	return 0;
//}

////计算器----实现整数的加减乘除
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//	//函数指针数组
//	int (*pf[5])(int, int);
//
//	//ppf是指向函数指针数组的指针
//	int (*(*ppf)[5])(int, int) = &pf;
//
//
//	return 0;
//}

