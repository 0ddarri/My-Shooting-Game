#pragma once
class BossMonsterRight : public Unit
{
public:
	BossMonsterRight();
	~BossMonsterRight();

	virtual void Update();
	virtual void Move();
	virtual void Clipping();
	void Create();
};