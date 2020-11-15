#include "Include.h"

Bullet::Bullet()
{
    body = '^';

    pPosX = 0;
    pPosY = 0;

    fcolor = YELLOW;
    isActive = false;
}

int BulletCooltime = 50;

Bullet::~Bullet()
{

}

void Bullet::Update()
{
    //fcolor = GetTickCount() % 15;

    CreateBullet(BulletCooltime);
    Move();
    Clipping();
}

void Bullet::Move()
{
    y -= speed;
}

void Bullet::Clipping()
{
    if (y < 0)
    {
        isActive = false;
        y = -999999;
    }
}

//
//void Bullet::Col(int Monx, int Mony, bool MonisActive)
//{
//    for (int i = 0; i < Max; i++)
//    {
//        if (x == Monx && y <= Mony)
//        {
//            isActive = false;
//            x = -100;
//            y = -100;
//            MonisActive = false;
//            Monx = -150;
//            Mony = -150;
//        }
//    }
//}
//

void Bullet::SetPlayerPos(int x, int y)
{
    pPosX = x;
    pPosY = y;
}

DWORD BulletDelay = GetTickCount64();

void Bullet::CreateBullet(int CoolTime)
{
    if (IsKey(VK_SPACE))
    {
        if (!isActive && BulletDelay < GetTickCount64())
        {
            BulletDelay = GetTickCount64() + CoolTime;

            x = pPosX;
            y = pPosY;

            isActive = true;
        }
    }
}
