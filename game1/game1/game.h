#pragma once

/* -----------------  头文件的包含、符号的定义、游戏相关函数的声明  ------------- */

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//符号的定义
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢结果
char IsWin(char board[ROW][COL], int row, int col);
//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col);

