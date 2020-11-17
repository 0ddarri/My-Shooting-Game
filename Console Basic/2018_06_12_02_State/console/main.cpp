#include "Include.h"

// 헝가리안 표기법
// int    n이름
// char   c이름
// bool   b이름	
// DWORD  dw이름
// short  s이름
// long   l이름
// 구조체 맴버변수는 
// int m_n이름
// char  m_c이름
// 글로벌 g_?이름
// int nVlaue = 0;
// void Quit();

CStateCtrl stateCtrl;

CLogoState logostate;
CMenuState menustate;
CGameState gamestate;

bool isQuit = false;
int main()
{
	//mciSendString("open bgm55.mp3 type mpegvideo alias BGM", 0, 0, 0);
	//mciSendString("play BGM", 0, 0, 0);
	//mciSendString

	InitialConsole();//초기화함수
	SetWindowTitle("Shooting");

	CSound::Init();
	CSound* sound = new CSound("bgm55.mp3", false);
	sound->play();


	//new : 공간할당
	int* val = new int[10]; // 4바이트만큼의 공간을 할당받음
	//int val[10]; // 위와 동일함

	delete val;

	stateCtrl.StateAdd(E_LOGO, &logostate);
	stateCtrl.StateAdd(E_MENU, &menustate);
	stateCtrl.StateAdd(E_GAME, &gamestate);

	stateCtrl.StateChange(E_LOGO);

	

	while (true)
	{
		if (IsKey(VK_1))
		{
			sound->volumeDown();
		}
		if (IsKey(VK_2))
		{
			sound->volumeUp();
		}

		CheckInput();
		ClearScreenEx3(BLACK);

		stateCtrl.Update();
		stateCtrl.Draw();

		Flip();
		EngineSync(30);

		if (isQuit)
		{
			CSound::Release();
			//exit(0);
			break;
		}
		sound->Update();
	}
	delete sound;

	CSound::Release();
	ReleaseConsole();
	return 0;
}
