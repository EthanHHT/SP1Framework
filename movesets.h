#pragma once
#include <string>
#include "Player.h"

using namespace std;

class movesets:
	public Player
{
private:
	string deck[20] = { "Molotov Cocktail", "Double Middle Finger", "Fake Punch", "Pepper Spray", "Slap",   //Battle moves
						"Bribe", "Kiss Ass", "Befriend", "Talk Shit", "Seduce",								//Converse moves
						"Gasoline", "Muay Thai Block", "Call Police", "Baby meat shield", "Dodge",			//Guarding moves
						"Stare", "Back off", "Call a friend", "Fiddle with phone", "Take a selfie" };		//Idle moves
	string move1;
	string move2;
	string move3;
	string move4;
	char move1_type;
	char move2_type;
	char move3_type;
	char move4_type;
	int rand_num;
	int num_used[4];
	bool reset;

public:
	//setters
	void setmove1();
	void setmove2();
	void setmove3();
	void setmove4();

	//getters
	string getmove(int a);
	char getmovetype(int a);
	int getreset();
};

