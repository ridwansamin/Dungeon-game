#ifndef ENEMIES_H
#define ENEMIES_H

#include <raylib.h>
#include "player.h"

typedef enum {
    Idle,
    Charging,
    Stopping,
    Turning,
} Bullstate;

typedef struct
{
    float x;
    float y;
    float speed;
    float accelaration;
    float deccelaration;
    float health;
    float damage;
    int   direction;
    float gravity;
    float velocityY;
    float turntimer;
    float hittimer;
    float knockbacktimer;
    int   knockbackdirection;
    int   collisiondirection;
    Bullstate state;
    bool  alive;
} Bull;

typedef struct
{
    float x;
    float y;
    float speed;
    float damage;
    float cooldown;
    float knockbackduration;
    bool  alive;
    bool  spiritcollision;
    int   knockdir;
    int   knockdirY;
} Spirit;

void BullCollisionX(Bull *B);
void BullCollisionY(Bull *B);
void UpdateBullGravity(Bull *B, float dt);
void spiritupdate(Spirit *en, Player *P, float dt);
void BullUpdateLogic(Bull *bn, Player *P, float dt, int AttackCheck, Rectangle *AttackRect);

#endif

