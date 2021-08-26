#pragma once
class Player //player class
{
public:
	bool baby, muay_thai_for_dummies_book, phone, gasoline_bottle;
	Player();
	~Player();
	void setbaby(int a);
	void setMTFDB(int a);
	void setphone(int a);
	void setGB(int a);
	bool getbaby();
	bool getMTFDB();
	bool getphone();
	bool getGB();
	int mood;  //to rng the mood
	int getmood();
	int health;
	int gethealth();
	int dmg_taken;  //dmg taken during that turn
	void set_dmg_taken(int a);
	void sethp();
	
};
