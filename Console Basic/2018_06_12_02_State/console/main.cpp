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

int x = 0;
int y = 0;

int main()
{
	InitialConsole();//�ʱ�ȭ�Լ�
	SetWindowTitle("Shooting");
	while (true)
	{
		CheckInput();
		ClearScreenEx3(BLACK);

		DrawCharEx3(x, y, 'A', WHITE, BLACK);

		if (IsKey(VK_UP))
		{
			y--;
		}

		if (IsKey(VK_LEFT))
		{
			x--;
		}

		if (IsKey(VK_DOWN))
		{
			y++;
		}

		if (IsKey(VK_RIGHT))
		{
			x++;
		}


		Flip();
		EngineSync(30);
	}

	ReleaseConsole();
	return 0;
}
