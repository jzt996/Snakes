#include "БъЭЗ.h"
extern struct snake ji;
extern struct FOOD food;
int initUI()
{
	COORD cursor;
	for (int i = 0; i < ji.size; i++)
	{
		cursor.X = ji.body[i].X;
		cursor.Y = ji.body[i].Y;
		
		SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
		if (i == 0)
		{
			putchar('@');
		}
		else
		{
			putchar('*');
		}
	}
	cursor.X = food.X;
	cursor.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
	putchar('#');
	cursor.X = HIGH+1;
	cursor.Y = WIDE+1;
	SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
	return 0;
}