#include "Player.h"
#include "cstdlib"
#include <time.h>

int Player::getmood()
{
	srand((unsigned)time(0));
	mood = 1 + (rand() % 5);
	return mood;
}

int Player::gethealth()
{
	health -= dmg_taken;
	return health;
}
