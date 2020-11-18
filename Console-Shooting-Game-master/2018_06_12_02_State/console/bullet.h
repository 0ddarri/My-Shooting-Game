#pragma once

class Bullet : public Unit
{
public:
    Bullet();
    ~Bullet();

    int pPosX;
    int pPosY;

    virtual void Update();
    virtual void Move();
    virtual void Clipping();
    //void Col(int x, int y, bool MonActive);

    void SetPlayerPos(int x, int y);
    void CreateBullet(int CoolTime);
};