#include "Include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = 'M';
	hp = 5;
	speed = 1;
	attack = 1;
	isActive = false;

	fcolor = WHITE;
	bcolor = BLACK;
}

Unit::~Unit()
{

}

void Unit::Draw()
{
	if (isActive)
	{
		DrawCharEx3(x, y, body, fcolor, bcolor);
	}
}