#include"game_1.h"

void menu()
{
	printf("*****************************************\n");
	printf("*****************************************\n");
	printf("***********    1. play     **************\n");
	printf("***********    0. exit     **************\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}

void game()
{
	//�洢��--��ά����
	char board[ROW][COL];
	//��ʼ������--��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ����--��ӡ��������
	DisplayBoard(board, ROW, COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret= IsWin(board, ROW, COL);
		if (ret != 'C') //�ж���Ϸ״̬��ȷ����Ϸ�Ƿ����
		{
			break;
		}

		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') //�ж���Ϸ״̬��ȷ����Ϸ�Ƿ����
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���ȡ��ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ȡ��ʤ��\n");
	}
	else
	{
		printf("��Ϸƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("������������Ϸ\n");
				game();
				Sleep(1000);
				system("cls");
				break;
			case 0:
				Sleep(1000);
				system("cls");
				printf("�˳���������Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);

	return 0;
}