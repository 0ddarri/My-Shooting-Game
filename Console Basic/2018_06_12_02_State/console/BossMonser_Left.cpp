#include "Include.h"

BossMonsterLeft::BossMonsterLeft()
{
	isActive = false;
	x = -1;
	y = -1;
	body = 'H';
	hp = 0;
	speed = 1;
	attack = 1;
	fcolor = RED;

	srand(time(NULL));
}

BossMonsterLeft::~BossMonsterLeft()
{

}

void BossMonsterLeft::Update()
{
	Create();
	Move();
	Clipping();
}

void BossMonsterLeft::Move()
{
	if (isActive)
	{
		x += speed;
	}
}

void BossMonsterLeft::Clipping()
{
	if (x >= 120)
	{
		isActive = false;
		x = -999;
		y = -6;
	}
}

DWORD bossTimer = GetTickCount();

void BossMonsterLeft::Create()
{
	if (bossTimer < GetTickCount())
	{
		if (!isActive)
		{
			//speed = rand() % 3 + 1;
			y = rand() % 11 + 19;
			x = -100;
			isActive = true;
			bossTimer = GetTickCount() + 2000;
		}
	}
}
