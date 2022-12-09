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
	//д��������
	//һ�������Ų��úõ��׵���Ϣ  char  ��ʼ��Ϊ�� 0 ��
	//һ���������Ų�����׵���Ϣ  char  ��ʼ��Ϊ�� * ��

	char mine[ROWS][COLS];//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine,show,ROW,COL);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳��ɹ�!!!\n");
			break;
		default:
			printf("������ѡ��!!!\n");
			break;
		}
	} while (input);
	return 0;
}