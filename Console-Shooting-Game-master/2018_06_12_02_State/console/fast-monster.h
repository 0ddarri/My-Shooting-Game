#pragma once

class FastMonster : public Unit
{
public:
	FastMonster();
	~FastMonster();

	virtual void Update();
	virtual void Move();
	virtual void Clipping();
	void Create();
};