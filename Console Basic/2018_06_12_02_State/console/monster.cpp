#include "Include.h"

Monster::Monster()
{
	isActive = false;
	x = -1;
	y = -1;
	body = 'D';
	hp = 0;
	speed = 1;
	attack = 1;
	fcolor = RED;

	srand(time(NULL));
}

Monster::~Monster()
{

}

void Monster::Update()
{
	Create();
	Clipping();
	Move();
}

void Monster::Move()
{
	if (isActive)
	{
		y += speed;
	}
}

void Monster::Clipping()
{
	if (y >= 30)
	{
		isActive = false;
		//x = -999;
		y = -2;
	}
}

DWORD Timer1 = GetTickCount();


void Monster::Create()
{
	if (Timer1 < GetTickCount())
	{
		if (!isActive)
		{
			x = rand() % 120;
			y = -1;
			isActive = true;
			Timer1 = GetTickCount() + 500;
		}
	}
}