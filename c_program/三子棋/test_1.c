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
	//存储数--二维数组
	char board[ROW][COL];
	//初始化棋盘--初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘--打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接受游戏状态
	while (1)
	{
		//玩家玩
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret= IsWin(board, ROW, COL);
		if (ret != 'C') //判断游戏状态，确认游戏是否继续
		{
			break;
		}

		//电脑玩
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') //判断游戏状态，确认游戏是否继续
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家取得胜利\n");
	}
	else if (ret == '#')
	{
		printf("电脑取得胜利\n");
	}
	else
	{
		printf("游戏平局\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("游玩三子棋游戏\n");
				game();
				Sleep(1000);
				system("cls");
				break;
			case 0:
				Sleep(1000);
				system("cls");
				printf("退出三子棋游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);

	return 0;
}