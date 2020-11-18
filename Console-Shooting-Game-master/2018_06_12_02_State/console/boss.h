#pragma once
class Boss
{
public:
	Boss();
	~Boss();

	void Update();
	void DrawBoss(char c_boss[15][120]);

	int x;
	int y;
	int hp;
	int speed;

	bool isActive;

	DWORD fcolor;
	DWORD bcolor;


};