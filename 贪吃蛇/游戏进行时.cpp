#include "±êÍ·.h"
extern struct snake ji;
extern struct FOOD food;
extern int score; 
extern int speed;
int gameOVER()
{
	int lastx = 0;
	int lasty = 0;
	COORD cursor;
	char key = 'd';
	int a = 0;
	while(1)
	{ 
		a++;
		initUI();
		int jx = 0, jy = 0;
		if (_kbhit())
		{
			key = _getch();
		}
		switch (key)
		{
		case'a':
			jx = -1;
			jy = 0;
			break;
		case'w':
			jx = 0;
			jy = -1;
			break;
		case's':
			jx = 0;
			jy = 1;
			break;
		case'd':
			jx = 1;
			jy = 0;
			break;
		default:
			break;
		}
	
		//ji.body[0].X += jx;
		//ji.body[0].Y += jy;
		//×²Ç½
		if (ji.body[0].X == 0 || ji.body[0].X == HIGH || ji.body[0].Y == 0 || ji.body[0].Y == WIDE)
		{
			return 0;
		}
		//×²Î²°Í
		for (int i = 1; i < ji.size; i++)
		{
			if (ji.body[0].X == ji.body[i].X && ji.body[0].Y == ji.body[i].Y)
			{
				return 0;
			}
		}
		//³Ô¶¹×Ó
		if (ji.body[0].X == food.X && ji.body[0].Y == food.Y)
		{
			ji.size += 1;
			srand(time(NULL));
			int x = rand() % HIGH;
			int y = rand() % WIDE;
			initFood(x,y);
			score += 10;
			speed /=2;
			cursor.X = 0;
			cursor.Y = WIDE+2;
			SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
			printf("³É¼¨Îª:%d\n", score);
		}
		if (a >=2)
		{
			cursor.X = lastx;
			cursor.Y = lasty;
			SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
			putchar(' ');
			cursor.X = HIGH+1;
			cursor.Y = WIDE+1;
			SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
		}
		lastx = ji.body[ji.size - 1].X;
		lasty = ji.body[ji.size - 1].Y;
		for (int i = 0; i < ji.size - 1; i++)
		{
			ji.body[ji.size - 1 - i].X = ji.body[ji.size - 2 - i].X;
			ji.body[ji.size - 1 - i].Y = ji.body[ji.size - 2 - i].Y;
		}
		ji.body[0].X += jx;
		ji.body[0].Y += jy;
		
		
		//printf("Î²°Í:%d %d",ji.size,ji.body[ji.size-1].X);
		Sleep(speed);
		//system("cls");
	}
}