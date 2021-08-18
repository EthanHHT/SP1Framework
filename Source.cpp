#include "movesets.h"
#include "Player.h"
#include "Enemy.h"
#include "SecurityGuard.h"
#include <iostream>
#include <string>
using namespace std;


void init()  //everything to init before game starts
{
	bool gameover = false;
	
	movesets deck;

	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();
	
	cout << "Move 1 : " << deck.getmove1() << '(' << deck.getmove1_type() << ')' << endl;
	cout << "Move 2 : " << deck.getmove2() << '(' << deck.getmove2_type() << ')' << endl;
	cout << "Move 3 : " << deck.getmove3() << '(' << deck.getmove3_type() << ')' << endl;
	cout << "Move 4 : " << deck.getmove4() << '(' << deck.getmove4_type() << ')' << endl;
	
	Player player;
	player.health = 100; //idk the health i guess
	int Mood = player.getmood();
	switch (Mood)
	{
	case 1:
		str_mood = "Agitated";
		break;
	case 2:
		str_mood = "Hungover";
		break;
	case 3:
		str_mood = "Elated";
		break;
	case 4:
		str_mood = "Drunk";
		break;
	}
	
	cout << "Your mood is" << str_mood << endl;
}

int main(void) 
{
	init();
	
	while (gameover == false) //main game loop
	{
		
	}		
		
		

	return 0;
	
}
