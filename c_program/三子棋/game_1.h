	#pragma once
//处理兼容性
#define _CRT_SECURE_NO_WARNINGS 1

//引用库函数
#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"windows.h"


//符号的定义
#define ROW 3	//行
#define COL 3	//列

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);	//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col); //打印棋盘
	//玩家下棋为*
	//电脑下棋为#
void PlayerMove(char board[ROW][COL], int row, int col); //玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col); //电脑下棋
	//玩家赢返回字符'*'
	//电脑赢返回字符'#'
	//游戏平局返回字符'Q'
	//游戏继续返回字符'C'
char IsWin(char board[ROW][COL], int row, int col); //判断输赢
