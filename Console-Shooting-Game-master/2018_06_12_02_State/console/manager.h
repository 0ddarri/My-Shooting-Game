#pragma once
class Manager
{
public:
	Manager();
	~Manager();

	Hero hero;
	Bullet bullet[Max];
	Monster monster[Max];

	void Update();
	void Draw();

private:

};