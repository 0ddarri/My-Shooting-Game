#pragma once
class Unit
{
public:
	Unit();
	~Unit();

	int x;
	int y;
	char body;
	int hp;
	int speed;
	int attack;

	bool isActive;

	DWORD fcolor;
	DWORD bcolor;

	virtual void Update() = 0;
	void Draw(); // 애초에 가상함수로 뺄 필요가 없는게, 밑에 자식들이 부모의 virtual 함수를 재정의 하지 않음.
	virtual void Move() = 0;
	virtual void Clipping() = 0;
};