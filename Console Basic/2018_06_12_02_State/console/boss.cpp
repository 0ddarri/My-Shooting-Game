#include "Include.h"


Boss::Boss()
{
	x = -50;
	y = -50;
	hp = 100;
	speed = 1;
	isActive = false;

	fcolor = LIGHTBLUE;
	bcolor = BLACK;
}

Boss::~Boss()
{

}

void Boss::Update()
{
	if (isActive)
	{
		x = 0;
		y += speed;
		if (y >= 4)
		{
			y = 4;
		}
	}
}

void Boss::DrawBoss(char c_boss[15][120])
{
	if (isActive)
	{
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 120; j++)
			{
				DrawCharEx3(x+ j, y + i, c_boss[i][j], fcolor, bcolor);
			}
		}
	}
}
