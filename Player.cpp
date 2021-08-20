#include "Player.h"
#include "cstdlib"
#include <time.h>

int Player::getmood()
{
	srand((unsigned)time(0));
	mood = 1 + (rand() % 3);  //rng 1-3
	return mood;
}

int Player::gethealth()
{
	return health;
}

void Player::set_dmg_taken(int a)
{
	dmg_taken = a;
	health -= dmg_taken;
}

void Player::sethp()
{
	health = 100;
}
