#ifndef __��ͷ_H__
#define __��ͷ_H__
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
//����
struct BODY
{
	int X;
	int Y;
};
//�߱���
struct snake
{
	int size;
	struct BODY body[HIGH * WIDE];
};

//ʳ��
struct FOOD
{
	int X;
	int Y;
};
#endif
