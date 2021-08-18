#include "Enemy.h"

int Enemy::getProg()
{
	total_progress = 0;
	total_progress += progress_done;
	return total_progress;
}

float Enemy::getmultiplier(int type_effect)
{
	switch (type_effect)
	{
	case 1:  //very effective
		multiplier = 13 / 10;
		break;
	case 2:  //effective
		multiplier = 11 / 10;
		break; 
	case 3:  //normal
		multiplier = 1;
		break;
	case 4:  //not effective
		multiplier = 9 / 10;
	default:
		break;
	}

	return multiplier;
}
