#include "movesets.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
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
	case 5:
		str_mood = "High";
		break;
	}
}
