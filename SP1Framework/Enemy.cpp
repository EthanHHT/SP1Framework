#include "Enemy.h"

int Enemy::getProg()
{
	total_progress = 0;
	total_progress += progress_done;
	return total_progress;
}
