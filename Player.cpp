#include "Player.h"
#include "cstdlib"
#include <time.h>

Player::Player()
{
	setbaby(1);
	setMTFDB(1);
	setGB(1);
	setphone(1);
}

Player::~Player()
{

}

void Player::setbaby(int a)
{
	if (a == 0)
	{
		baby = true;
	}
	else
	{
		baby = false;
	}
}

void Player::setMTFDB(int a)
{
	if (a == 0)
	{
		muay_thai_for_dummies_book = true;
	}
	else
	{
		muay_thai_for_dummies_book = false;
	}
}

void Player::setphone(int a)
{
	if (a == 0)
	{
		phone = true;
	}
	else
	{
		phone = false;
	}
}

void Player::setGB(int a)
{
	if (a == 0)
	{
		gasoline_bottle = true;
	}
	else
	{
		gasoline_bottle = false;
	}
}



bool Player::getbaby()
{
	return baby;
}

bool Player::getMTFDB()
{
	return muay_thai_for_dummies_book;
}

bool Player::getphone()
{
	return phone;
}

bool Player::getGB()
{
	return gasoline_bottle;
}

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
	if (health > 100)
	{
		health = 100;
	}
}

void Player::sethp()
{
	health = 100;
}
