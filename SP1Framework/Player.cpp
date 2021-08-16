#include "Player.h"
#include "cstdlib"
#include <time.h>

int Player::getmood()
{
	srand((unsigned)time(0));
	mood = 1 + (rand() % 4);  //rng 1-4
	return mood;
}

int Player::gethealth()
{
	health -= dmg_taken;
	return health;
}
