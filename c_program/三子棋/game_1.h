	#pragma once
//���������
#define _CRT_SECURE_NO_WARNINGS 1

//���ÿ⺯��
#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"windows.h"


//���ŵĶ���
#define ROW 3	//��
#define COL 3	//��

//����������
void InitBoard(char board[ROW][COL], int row, int col);	//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col); //��ӡ����
	//�������Ϊ*
	//��������Ϊ#
void PlayerMove(char board[ROW][COL], int row, int col); //�������
void ComputerMove(char board[ROW][COL], int row, int col); //��������
	//���Ӯ�����ַ�'*'
	//����Ӯ�����ַ�'#'
	//��Ϸƽ�ַ����ַ�'Q'
	//��Ϸ���������ַ�'C'
char IsWin(char board[ROW][COL], int row, int col); //�ж���Ӯ
