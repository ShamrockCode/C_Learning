#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************************************\n");
	printf("**********************************************\n");
	printf("******************  1.play  ******************\n");
	printf("******************  0.exit  ******************\n");
	printf("**********************************************\n");
	printf("**********************************************\n");
}

void game()
{
	//写两个数组
	//一个数组存放布置好的雷的信息  char  初始化为‘ 0 ’
	//一个数组存放排查出的雷的信息  char  初始化为‘ * ’

	char mine[ROWS][COLS];//存放布置好的雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine,show,ROW,COL);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出成功!!!\n");
			break;
		default:
			printf("请重新选择!!!\n");
			break;
		}
	} while (input);
	return 0;
}