#include "movesets.h"
#include "Player.h"
#include "Enemy.h"
#include "SecurityGuard.h"
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
		
		

	return 0;
	
}
