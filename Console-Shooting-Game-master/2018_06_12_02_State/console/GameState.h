class CGameState : public CState
{
public:
	CGameState();
	~CGameState();


	Hero hero;
	Bullet bullet[Max];
	Monster monster[Max];
	FastMonster fastmonster[Max];
	Effect effect[Max];
	BossMonsterLeft bossmonsterleft[Max];
	BossMonsterRight bossmonsterRight[Max];

	Boss boss;

	//CSound sound;
public:
	virtual void Start();

	virtual void Update();
	virtual void Draw();
	virtual void Exit();

	void Col();
	void EffectCreate(int x, int y);

	void Skill();
};