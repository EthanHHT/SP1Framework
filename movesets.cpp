#include "movesets.h"
#include <time.h>

void movesets::setmove1()
{
	srand(time(NULL));
	rand_num = rand() % 19 + 1;
	num_used[0] = rand_num;
	move1 = deck[rand_num];

	if (rand_num < 5)
	{
		move1_type = 'B';
	}
	else if (rand_num >= 5 && rand_num < 10)
	{
		move1_type = 'C';
	}
	else if (rand_num >= 10 && rand_num < 15)
	{
		move1_type = 'G';
	}
	else
	{
		move1_type = 'I';
	}
}

void movesets::setmove2()
{
	srand(time(NULL));
	rand_num = rand() % 19 + 1;

	while (rand_num == num_used[0])
	{
		rand_num = rand() % 19 + 1;
	}

	num_used[1] = rand_num;
	move2 = deck[rand_num];

	if (rand_num < 5)
	{
		move2_type = 'B';
	}
	else if (rand_num >= 5 && rand_num < 10)
	{
		move2_type = 'C';
	}
	else if (rand_num >= 10 && rand_num < 15)
	{
		move2_type = 'G';
	}
	else
	{
		move2_type = 'I';
	}
}

void movesets::setmove3()
{
	srand(time(NULL));
	rand_num = rand() % 19 + 1;

	while (rand_num == num_used[0] || rand_num == num_used[1])
	{
		rand_num = rand() % 19 + 1;
	}

	num_used[2] = rand_num;
	move3 = deck[rand_num];

	if (rand_num < 5)
	{
		move3_type = 'B';
	}
	else if (rand_num >= 5 && rand_num < 10)
	{
		move3_type = 'C';
	}
	else if (rand_num >= 10 && rand_num < 15)
	{
		move3_type = 'G';
	}
	else
	{
		move3_type = 'I';
	}
}

void movesets::setmove4()
{
	srand(time(NULL));
	rand_num = rand() % 19 + 1;

	while (rand_num == num_used[0] || rand_num == num_used[1] || rand_num == num_used[2])
	{
		rand_num = rand() % 19 + 1;
	}

	num_used[3] = rand_num;
	move4 = deck[rand_num];

	if (rand_num < 5)
	{
		move4_type = 'B';
	}
	else if (rand_num >= 5 && rand_num < 10)
	{
		move4_type = 'C';
	}
	else if (rand_num >= 10 && rand_num < 15)
	{
		move4_type = 'G';
	}
	else
	{
		move4_type = 'I';
	}
}

char movesets::getmovetype(int a)
{
	if (a == 1)
	{
		return move1_type;
	}
	else if (a == 2)
	{
		return move2_type;
	}
	else if (a == 3)
	{
		return move3_type;
	}
	else
	{
		return move4_type;
	}
	
}

string movesets::getmove(int a)
{
	if (a == 1)
	{
		return move1;
	}
	else if (a == 2)
	{
		return move2;
	}
	else if (a == 3)
	{
		return move3;
	}
	else
	{
		return move4;
	}
}

