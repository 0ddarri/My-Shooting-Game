#include "Include.h"

FastMonster::FastMonster()
{
	isActive = false;
	x = -1;
	y = -1;
	body = 'O';
	hp = 0;
	speed =  1;
	attack = 1;

	srand(time(NULL));
}

FastMonster::~FastMonster()
{
}

void FastMonster::Update()
{
	Create();
	Clipping();
	Move();

	fcolor = GetTickCount() % 15;
	bcolor = GetTickCount() % 15;
}

void FastMonster::Move()
{
	if (isActive)
	{
		y += speed;
	}
}

void FastMonster::Clipping()
{
	if (y >= 30)
	{
		isActive = false;
		//x = -999;
		y = -4;
	}
}

DWORD Timer2 = GetTickCount();

void FastMonster::Create()
{
	if (Timer2 < GetTickCount())
	{
		if (!isActive)
		{
			x = rand() % 120;
			y = -1;
			isActive = true;
			Timer2 = GetTickCount() + 2500;
		}
	}
}
