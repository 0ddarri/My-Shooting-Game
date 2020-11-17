#include "Include.h"

// �밡���� ǥ���
// int    n�̸�
// char   c�̸�
// bool   b�̸�	
// DWORD  dw�̸�
// short  s�̸�
// long   l�̸�
// ����ü �ɹ������� 
// int m_n�̸�
// char  m_c�̸�
// �۷ι� g_?�̸�
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

	InitialConsole();//�ʱ�ȭ�Լ�
	SetWindowTitle("Shooting");

	CSound::Init();
	CSound* sound = new CSound("bgm55.mp3", false);
	sound->play();


	//new : �����Ҵ�
	int* val = new int[10]; // 4����Ʈ��ŭ�� ������ �Ҵ����
	//int val[10]; // ���� ������

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
