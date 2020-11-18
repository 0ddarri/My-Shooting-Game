#include "Include.h"

Thunder::Thunder()
{
	x = -289;
	y = -3456;

	color = WHITE;
}

DWORD ThunderTimer;
DWORD ThunderTimer2;

void Thunder::Update(int bosshp, bool Active)
{
	if (bosshp <= 50 && Active)
	{
		ThunderTimer = GetTickCount();
		if (ThunderTimer < GetTickCount())
		{
			x = rand() % 120;
			y = 30;

			if (ThunderTimer2 < GetTickCount() - 500)
			{
				color = WHITE
			}
		}
	}
}

void Thunder::Draw()
{
	DrawFillBoxEx3(x, y, 1, 30, color);
}

Thunder::~Thunder()
{
}

