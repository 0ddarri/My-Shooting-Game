#include "Include.h"

Hero::Hero()
{
	x = 60;
	y = 25;
	body = 'H';
	hp = 3;
	speed = 1;
	attack = 1;
	isActive = true;

	fcolor = YELLOW;
}

Hero::~Hero()
{

}

void Hero::Update()
{
	Move();
	Clipping();
}

void Hero::Move()
{
	if (IsKey(VK_LEFT))
	{
		x -= speed;
	}
	if (IsKey(VK_RIGHT))
	{
		x += speed;
	}
	if (IsKey(VK_UP))
	{
		y -= speed;
	}
	if (IsKey(VK_DOWN))
	{
		y += speed;
	}
}

int bossclipping = 0;

void Hero::Clipping()
{

	if (x >= 118)
	{
		x = 118;
	}
	if (x <= 0)
	{
		x = 0;
	}

	if (y >= 28)
	{
		y = 28;
	}
	if (y <= bossclipping)
	{
		y = bossclipping;
	}
}

