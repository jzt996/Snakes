#include "��ͷ.h"
int score = 0;
struct snake ji;
struct FOOD food;
//�ٶ�
int speed = 100;
int main()
{
	COORD cursor;
	CONSOLE_CURSOR_INFO jjj;
	jjj.dwSize = sizeof(jjj);
	jjj.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_ERROR_HANDLE), &jjj);
	initWall();
	//��ʼ���÷�
	{
		cursor.X = 0;
		cursor.Y = WIDE + 2;
		SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE), cursor);
		printf("�ɼ�Ϊ:%d\n", score);
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