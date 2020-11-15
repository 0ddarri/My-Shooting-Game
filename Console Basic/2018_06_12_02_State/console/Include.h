#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include <crtdbg.h>
#include "../ConsoleEx3/ConWrap.h"
#include "Define.h"
#include "mmsystem.h"
#include <time.h>
#define Max 300
//------------------------------------
#include "State.h"
#include "StateCtrl.h"

#include "Unit.h"

#include "boss.h"

#include "Hero.h"
#include "monster.h"
#include "fast-monster.h"
#include "BossMonster_Left.h"
#include "BosSMonster_Right.h"

#include "bullet.h"

#include "effect.h"

#include "LogoState.h"
#include "MenuState.h"
#include "GameState.h"

#include "Extern.h"

//extern Effect effect[Max];
//extern char c_Effect[3][3][3];

//extern Boss boss;
extern int bossclipping;

extern int BulletCooltime;

extern DWORD StartTime;
extern DWORD PlayTIme;
extern DWORD NowTime;
#endif