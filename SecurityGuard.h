#pragma once
#include "Enemy.h"
class SecurityGuard :
    public Enemy
{
public:
    int RandMood;
    int getMood();

};

