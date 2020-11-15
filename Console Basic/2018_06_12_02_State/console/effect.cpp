#include "Include.h"

Effect::Effect()
{
	index = 0;

	x = -99;
	y = -99;

	isActive = false;

	Timer = GetTickCount();

	fcolor = WHITE;
	bcolor = BLACK;
}



Effect::~Effect()
{

}

void Effect::Update()
{
	for (int i = 0; i < Max; i++)
	{
		if (isActive)
		{
			if (Timer < GetTickCount())
			{
				index++;
				Timer = GetTickCount() + 100;
				if (index >= 3)
				{
					isActive = false;
					index = 0;
					break;
				}
			}
		}
	}
}

void Effect::Draw(char c_effect[3][3][3])
{
	for (int i = 0; i < Max; i++)
	{
		if (isActive == true)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					DrawCharEx3(x + k, y + j, c_effect[index][j][k], fcolor, bcolor);
				}
			}
		}
	}
}
