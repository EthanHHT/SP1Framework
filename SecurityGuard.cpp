#include "SecurityGuard.h"
#include "cstdlib"
#include <time.h>

int SecurityGuard::getMood()
{
	srand((unsigned)time(0));
	RandMood = 1 + (rand() % 2);
	return RandMood; //either 1 or 2
	//1 Angry
	//2 Happi 
}

