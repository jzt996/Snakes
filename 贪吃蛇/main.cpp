#include "标头.h"
int score = 0;
struct snake ji;
struct FOOD food;
//速度
int speed = 100;
int main()
{
	COORD cursor;
	CONSOLE_CURSOR_INFO jjj;
	jjj.dwSize = sizeof(jjj);
	jjj.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_ERROR_HANDLE), &jjj);
	initWall();
	//初始化得分
	{
		cursor.X = 0;
		cursor.Y = WIDE + 2;
		SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
		printf("成绩为:%d\n", score);
	}
	srand(time(NULL));
	int x = rand() % HIGH;
	int y = rand() % WIDE;
	initSnake();
	initFood(x, y);
    initUI();
	gameOVER();
	system("pause");
	return 0;
}