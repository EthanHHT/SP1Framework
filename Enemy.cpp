#include "Enemy.h"

int Enemy::getProg()
{
	
	return total_progress;
}

Enemy::Enemy()
{
	set_prog();
	set_disturbed_stat(0);
	set_flammable_stat(0);
}

Enemy::~Enemy()
{

}

void Enemy::set_prog()
{
	total_progress = 0;
}

void Enemy::prog_made(int a)
{
	progress_done = a;

	total_progress = total_progress + progress_done  ;

	if (total_progress < 0) //cap the prog to a minimum 0
	{
		total_progress = 0;
	}
}

void Enemy::set_flammable_stat(int a)
{
	if (a == 1)
	{
		flammable_stat = true;
	}
	else
	{
		flammable_stat = false;
	}
}

void Enemy::set_disturbed_stat(int a)
{
	if (a == 1)
	{
		disturbed_stat = true;
	}
	else
	{
		disturbed_stat = false;
	}
}
