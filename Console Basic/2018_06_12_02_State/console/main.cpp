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

int main()
{
	InitialConsole();//�ʱ�ȭ�Լ�
	SetWindowTitle("Shooting");

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
		CheckInput();
		ClearScreenEx3(BLACK);

		stateCtrl.Update();
		stateCtrl.Draw();

		Flip();
		EngineSync(30);
	}

	ReleaseConsole();
	return 0;
}
