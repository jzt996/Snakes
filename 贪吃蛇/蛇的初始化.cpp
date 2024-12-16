#include "БъЭЗ.h"
extern struct snake ji;
int initSnake()
{
	
	ji.body[0].X = HIGH/2;
	ji.body[0].Y = WIDE / 2;
	ji.body[1].X = (HIGH / 2)-1;
	ji.body[1].Y = WIDE / 2;
	
	ji.size = 2;
	return 0;
}