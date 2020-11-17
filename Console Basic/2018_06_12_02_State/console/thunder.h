#pragma once
class Thunder
{
public:
	Thunder();
	~Thunder();

	int x;
	int y;

	DWORD color;

	void Update(int x, bool Active);
	void Draw();

};