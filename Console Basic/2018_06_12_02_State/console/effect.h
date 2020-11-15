#pragma once
class Effect
{
public:
	Effect();
	~Effect();

	void Update();
	void Draw(char c_effect[3][3][3]);

	int x;
	int y;

	int isActive;

	int index;

	DWORD Timer;

	DWORD fcolor;
	DWORD bcolor;

private:

};