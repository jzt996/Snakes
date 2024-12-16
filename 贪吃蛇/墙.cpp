#include "БъЭЗ.h"
extern struct snake ji;
extern struct FOOD food;
int initWall()
{
	for (int i = 0; i <= WIDE; i++)
	{
		for (int j = 0; j <= HIGH; j++)
		{
			if (i == WIDE)
			{
				printf("_");
			}
			else if (j == HIGH)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}