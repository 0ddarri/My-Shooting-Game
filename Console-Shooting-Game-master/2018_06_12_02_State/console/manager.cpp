#include "Include.h"


Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::Update()
{
	hero.Update();

	for (int i = 0; i < Max; i++)
	{
		bullet[i].Update();
		monster[i].Update();
	}
}

void Manager::Draw()
{
	hero.Draw();

	for (int i = 0; i < Max; i++)
	{
		bullet[i].Draw();
		monster[i].Draw();
	}
}