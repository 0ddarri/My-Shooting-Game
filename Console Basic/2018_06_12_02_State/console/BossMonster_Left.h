#pragma once
class BossMonsterLeft : public Unit
{
public:
	BossMonsterLeft();
	~BossMonsterLeft();

	void Update() override;
	void Move() override;
	void Clipping() override;
	void Create();
};