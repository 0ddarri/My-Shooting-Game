#include "Include.h"

BossMonsterRight::BossMonsterRight()
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

BossMonsterRight::~BossMonsterRight()
{

}

void BossMonsterRight::Update()
{
	Create();
	Move();
	Clipping();
}

void BossMonsterRight::Move()
{
	if (isActive)
	{
		x -= speed;
	}
}

void BossMonsterRight::Clipping()
{
	if (x <= 0)
	{
		isActive = false;
		x = -9989;
		y = -6;
	}
}

DWORD bossTimerRight = GetTickCount();
DWORD bossTimerRight2 = GetTickCount();

void BossMonsterRight::Create()
{

	if (bossTimerRight < GetTickCount())
	{
		if (!isActive)
		{
			//speed = rand() % 3 + 1;
			y = rand() % 11 + 19;
			x = 150;
			isActive = true;
			bossTimerRight = GetTickCount() + 300;
		}
	}


}
