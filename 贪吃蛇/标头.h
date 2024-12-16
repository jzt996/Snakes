#ifndef __标头_H__
#define __标头_H__
#include <stdio.h>
#include <string.h>
#include <Stdlib.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#define HIGH 60
#define WIDE 20
int initSnake();
int initFood(int x, int y);
int initUI();
int gameOVER();
int initWall();
//蛇身
struct BODY
{
	int X;
	int Y;
};
//蛇本体
struct snake
{
	int size;
	struct BODY body[HIGH * WIDE];
};

//食物
struct FOOD
{
	int X;
	int Y;
};
#endif
