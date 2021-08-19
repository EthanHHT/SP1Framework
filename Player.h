#pragma once
class Player //player class
{
public:
	int mood;  //to rng the mood
	int getmood();
	int health;
	int gethealth();
	int dmg_taken;  //dmg taken during that turn
	void set_dmg_taken(int a);
	void sethp();
	
};
