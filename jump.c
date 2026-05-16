#include "player.h"
#include "enemies.h"

void UpdateJump(Player *P, float dt)
{
    // jump starts
    if (P->onground && IsKeyPressed(KEY_SPACE))
    {
        P->velocityY = -3000.0f;
        P->onground = false;
    }
    else if (!P->onground && P->doublejump && IsKeyPressed(KEY_SPACE))
    {
        P->velocityY = -3000.0f;
        P->doublejump = false;
    }
    // jump ends
}

void UpdateGravity(Player *P,float dt)
{
    // Y movement starts
    P->velocityY += P->gravity * dt;
    P->y += P->velocityY * dt;
    P->onground = false;
    // y movement ends
}