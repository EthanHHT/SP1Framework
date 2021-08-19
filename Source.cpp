#include "movesets.h"
#include "Enemy.h"
#include "SecurityGuard.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
	movesets deck;
	Player me;
	me.sethp();


	// the fighting with other civilians/enemies part
	Enemy Bus_captain;
	Enemy Auntie;
	Enemy Colleague;
	SecurityGuard SG;
	Enemy Cyclist;
	Enemy Boss;

	int move_use;

	//fighting bus captain
	//randomize the movesets
	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();

	while (Bus_captain.getProg() < 100 && me.gethealth() > 0)
	{
		cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
		cout << "Progress made so far on the bus captain is : " << Bus_captain.getProg() << '%' << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << "Move " << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
				deck.getmovetype(i + 1) << ')' << endl;
		}


		cout << "Which move will you use? : ";
		cin >> move_use;
		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			if (move_use == i+1)
			{
				if (deck.getmovetype(i+1) == 'B')
				{
					if (deck.getmove(i+1) == "Molotov Cocktail")
					{
						if (Bus_captain.flammable_stat == true)
						{
							Bus_captain.prog_made(-80);
						}
						else
						{
							Bus_captain.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Double Middle Finger")
					{
						if (Bus_captain.disturbed_stat == true)
						{
							Bus_captain.prog_made(-60);
						}
						else
						{
							Bus_captain.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Fake Punch" || deck.getmove(i + 1) == "Slap")
					{
						Bus_captain.prog_made(-20);
					}
					else if (deck.getmove(i + 1) == "Pepper Spray")
					{
						Bus_captain.prog_made(-30);
					}

					cout << "The bus captain doesn't look happy..." << endl;
					cout << "The bus captain cussed at you under his breath." << endl;

					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i+1) == 'C')
				{
					if (deck.getmove(i+1) == "Bribe")
					{
						Bus_captain.prog_made(30);
					}
					else if (deck.getmove(i+1) == "Kiss Ass")
					{
						Bus_captain.prog_made(60);
					}
					else if (deck.getmove(i+1) == "Befriend")
					{
						Bus_captain.prog_made(30);
					}
					else if (deck.getmove(i+1) == "Talk Shit")
					{
						Bus_captain.prog_made(45);
					}
					else if (deck.getmove(i+1) == "Seduce")
					{
						Bus_captain.prog_made(60);
					}
					cout << "The bus captain responded happily to me." << endl;
					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i+1) == 'G')
				{
					if (deck.getmove(i+1) == "Gasoline")
					{
						me.set_dmg_taken(7);
						Bus_captain.set_flammable_stat(1);
					}
					else if (deck.getmove(i+1) == "Muay Thai Block")
					{
						me.set_dmg_taken(5);
					}
					else if (deck.getmove(i + 1) == "Call Police")
					{
						me.set_dmg_taken(6);
					}
					else if (deck.getmove(i + 1) == "Baby meat shield")
					{
						me.set_dmg_taken(3);
						Bus_captain.set_disturbed_stat(1);
					}
					else //dodge
					{
						int dodge_success;
						dodge_success = rand() % 4 + 1;
						if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
						{
							cout << "Dodge successful" << endl;
							me.set_dmg_taken(0);
						}
						else
						{
							cout << "Did not dodge in time" << endl;
							me.set_dmg_taken(10);
						}
					}
				}
				else if (deck.getmovetype(i + 1) == 'I')
				{
					if (deck.getmove(i + 1) == "Stare" && Bus_captain.disturbed_stat == true)
					{
						Bus_captain.prog_made(20);
					}
					else
					{
						Bus_captain.prog_made(10);
					}
					cout << "The bus captain stared at me annoyedly." << endl;
					me.set_dmg_taken(10);
				}
			}
		}

		
		//system("CLS");
	}

	if (Bus_captain.getProg() >= 100)
	{
		cout << "You have defeated the bus captain." << endl;
	}

	else
	{
		cout << "You lose" << endl;
	}



	//battling the auntie
	//randomize the movesets
	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();
	

	while (Auntie.getProg() < 100 && me.gethealth() > 0)
	{
		cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
		cout << "Progress made so far on the auntie is : " << Auntie.getProg() << '%' << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << "Move " << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
				deck.getmovetype(i + 1) << ')' << endl;
		}


		cout << "Which move will you use? : ";
		cin >> move_use;
		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			if (move_use == i + 1)
			{
				if (deck.getmovetype(i + 1) == 'B')
				{
					if (deck.getmove(i + 1) == "Molotov Cocktail")
					{
						if (Auntie.flammable_stat == true)
						{
							Auntie.prog_made(-80);
						}
						else
						{
							Auntie.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Double Middle Finger")
					{
						if (Auntie.disturbed_stat == true)
						{
							Auntie.prog_made(-60);
						}
						else
						{
							Auntie.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Fake Punch" || deck.getmove(i + 1) == "Slap")
					{
						Auntie.prog_made(-20);
					}
					else if (deck.getmove(i + 1) == "Pepper Spray")
					{
						Auntie.prog_made(-30);
					}

					cout << "The auntie doesn't look happy..." << endl;
					cout << "The auntie cussed at you under his breath." << endl;

					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'C')
				{
					if (deck.getmove(i + 1) == "Bribe")
					{
						Auntie.prog_made(30);
					}
					else if (deck.getmove(i + 1) == "Kiss Ass")
					{
						Auntie.prog_made(60);
					}
					else if (deck.getmove(i + 1) == "Befriend")
					{
						Auntie.prog_made(30);
					}
					else if (deck.getmove(i + 1) == "Talk Shit")
					{
						Auntie.prog_made(45);
					}
					else if (deck.getmove(i + 1) == "Seduce")
					{
						Auntie.prog_made(60);
					}
					cout << "The bus captain responded happily to me." << endl;
					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'G')
				{
					if (deck.getmove(i + 1) == "Gasoline")
					{
						me.set_dmg_taken(7);
						Auntie.set_flammable_stat(1);
					}
					else if (deck.getmove(i + 1) == "Muay Thai Block")
					{
						me.set_dmg_taken(5);
					}
					else if (deck.getmove(i + 1) == "Call Police")
					{
						me.set_dmg_taken(6);
					}
					else if (deck.getmove(i + 1) == "Baby meat shield")
					{
						me.set_dmg_taken(3);
						Auntie.set_disturbed_stat(1);
					}
					else //dodge
					{
						int dodge_success;
						dodge_success = rand() % 4 + 1;
						if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
						{
							cout << "Dodge successful" << endl;
							me.set_dmg_taken(0);
						}
						else
						{
							cout << "Did not dodge in time" << endl;
							me.set_dmg_taken(10);
						}
					}
				}
				else
				{
					if (deck.getmove(i+1) == "Stare" && Auntie.disturbed_stat == true)
					{
						Auntie.prog_made(20);
					}
					else
					{
						Auntie.prog_made(10);
					}
					cout << "The auntie stared at me annoyedly." << endl;
					me.set_dmg_taken(10);
				}
			}
		}


		//system("CLS");
	}

	if (Auntie.getProg() >= 100)
	{
		cout << "You have defeated the auntie." << endl;
		cout << "The auntie gave you some fruits!" << endl;
		me.set_dmg_taken(-40);
	}

	else
	{
		cout << "You lose" << endl;
	}


	//battling the colleague
	//randomize the movesets
	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();
	

	while (Colleague.getProg() < 100 && me.gethealth() > 0)
	{
		cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
		cout << "Progress made so far on the Colleague is : " << Colleague.getProg() << '%' << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << "Move" << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
				deck.getmovetype(i + 1) << ')' << endl;
		}


		cout << "Which move will you use? : ";
		cin >> move_use;
		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			if (move_use == i + 1)
			{
				if (deck.getmovetype(i + 1) == 'B')
				{
					if (deck.getmove(i + 1) == "Molotov Cocktail")
					{
						if (Colleague.flammable_stat == true)
						{
							Colleague.prog_made(-40);
						}
						else
						{
							Colleague.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Double Middle Finger")
					{
						if (Colleague.disturbed_stat == true)
						{
							Colleague.prog_made(-30);
						}
						else
						{
							Colleague.prog_made(-20);
						}
					}
					else if (deck.getmove(i + 1) == "Fake Punch" || deck.getmove(i + 1) == "Slap")
					{
						Colleague.prog_made(-10);
					}
					else if (deck.getmove(i + 1) == "Pepper Spray")
					{
						Colleague.prog_made(-15);
					}

					cout << "The Colleague doesn't look happy..." << endl;
					cout << "The Colleague cussed at you under his breath." << endl;

					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'C')
				{
					if (deck.getmove(i + 1) == "Bribe")
					{
						Colleague.prog_made(10);
					}
					else if (deck.getmove(i + 1) == "Kiss Ass")
					{
						Colleague.prog_made(20);
					}
					else if (deck.getmove(i + 1) == "Befriend")
					{
						Colleague.prog_made(10);
					}
					else if (deck.getmove(i + 1) == "Talk Shit")
					{
						Colleague.prog_made(15);
					}
					else if (deck.getmove(i + 1) == "Seduce")
					{
						Colleague.prog_made(20);
					}
					cout << "The Colleague responded happily to me." << endl;
					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'G')
				{
					if (deck.getmove(i + 1) == "Gasoline")
					{
						me.set_dmg_taken(7);
						Colleague.set_flammable_stat(1);
					}
					else if (deck.getmove(i + 1) == "Muay Thai Block")
					{
						me.set_dmg_taken(5);
					}
					else if (deck.getmove(i + 1) == "Call Police")
					{
						me.set_dmg_taken(6);
					}
					else if (deck.getmove(i + 1) == "Baby meat shield")
					{
						me.set_dmg_taken(3);
						Colleague.set_disturbed_stat(1);
					}
					else //dodge
					{
						int dodge_success;
						dodge_success = rand() % 4 + 1;
						if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
						{
							cout << "Dodge successful" << endl;
							me.set_dmg_taken(0);
						}
						else
						{
							cout << "Did not dodge in time" << endl;
							me.set_dmg_taken(10);
						}
					}
				}
				else
				{
					if (deck.getmove(i + 1) == "Stare" && Colleague.disturbed_stat == true)
					{
						Colleague.prog_made(60);
					}
					else
					{
						Colleague.prog_made(30);
					}
					cout << "The Colleague stared at me annoyedly." << endl;
					me.set_dmg_taken(10);
				}
			}
		}


		//system("CLS");
	}

	if (Colleague.getProg() >= 100)
	{
		cout << "You have defeated the Colleague." << endl;
	}

	else
	{
		cout << "You lose" << endl;
	}




	//battling the security guard
	//randomize the movesets
	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();
	
	if (SG.getMood() == 1) // angry
	{
		while (SG.getProg() < 100 && me.gethealth() > 0)
		{
			cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
			cout << "Progress made so far on the Security Guard is : " << SG.getProg() << '%' << endl;
			cout << "The Security Guard is angry." << endl;

			for (int i = 0; i < 4; i++)
			{
				cout << "Move" << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
					deck.getmovetype(i + 1) << ')' << endl;
			}


			cout << "Which move will you use? : ";
			cin >> move_use;
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				if (move_use == i + 1)
				{
					if (deck.getmovetype(i + 1) == 'B')
					{
						if (deck.getmove(i + 1) == "Molotov Cocktail")
						{
							if (SG.flammable_stat == true)
							{
								SG.prog_made(120);
							}
							else
							{
								SG.prog_made(60);
							}
						}
						else if (deck.getmove(i + 1) == "Double Middle Finger")
						{
							if (SG.disturbed_stat == true)
							{
								SG.prog_made(90);
							}
							else
							{
								SG.prog_made(60);
							}
						}
						else if (deck.getmove(i + 1) == "Fake Punch" || deck.getmove(i + 1) == "Slap")
						{
							SG.prog_made(30);
						}
						else if (deck.getmove(i + 1) == "Pepper Spray")
						{
							SG.prog_made(45);
						}

						cout << "The Security Guard doesn't look happy..." << endl;
						cout << "The Security Guard cussed at you under his breath." << endl;

						me.set_dmg_taken(20);
					}
					else if (deck.getmovetype(i + 1) == 'C')
					{
						if (deck.getmove(i + 1) == "Bribe")
						{
							SG.prog_made(-10);
						}
						else if (deck.getmove(i + 1) == "Kiss Ass")
						{
							SG.prog_made(-20);
						}
						else if (deck.getmove(i + 1) == "Befriend")
						{
							SG.prog_made(-10);
						}
						else if (deck.getmove(i + 1) == "Talk Shit")
						{
							SG.prog_made(-15);
						}
						else if (deck.getmove(i + 1) == "Seduce")
						{
							SG.prog_made(-20);
						}
						cout << "The Security Guard responded happily to me." << endl;
						me.set_dmg_taken(20);
					}
					else if (deck.getmovetype(i + 1) == 'G')
					{
						if (deck.getmove(i + 1) == "Gasoline")
						{
							me.set_dmg_taken(14);
							SG.set_flammable_stat(1);
						}
						else if (deck.getmove(i + 1) == "Muay Thai Block")
						{
							me.set_dmg_taken(10);
						}
						else if (deck.getmove(i + 1) == "Call Police")
						{
							me.set_dmg_taken(12);
						}
						else if (deck.getmove(i + 1) == "Baby meat shield")
						{
							me.set_dmg_taken(6);
							SG.set_disturbed_stat(1);
						}
						else //dodge
						{
							int dodge_success;
							dodge_success = rand() % 4 + 1;
							if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
							{
								cout << "Dodge successful" << endl;
								me.set_dmg_taken(0);
							}
							else
							{
								cout << "Did not dodge in time" << endl;
								me.set_dmg_taken(20);
							}
						}
					}
					else
					{
						if (deck.getmove(i + 1) == "Stare" && SG.disturbed_stat == true)
						{
							SG.prog_made(20);
						}
						else
						{
							SG.prog_made(10);
						}
						cout << "The Security Guard stared at me annoyedly." << endl;
						me.set_dmg_taken(20);
					}
				}
			}


			//system("CLS");
		}

		if (SG.getProg() >= 100)
		{
			cout << "You have defeated the Security Guard." << endl;
		}

		else
		{
			cout << "You lose" << endl;
		}
	}

	else if (SG.getMood() == 2) //happi
	{
		while (SG.getProg() < 100 && me.gethealth() > 0)
		{
			cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
			cout << "Progress made so far on the Security Guard is : " << SG.getProg() << '%' << endl;
			cout << "The Security Guard is happy." << endl;

			for (int i = 0; i < 4; i++)
			{
				cout << "Move" << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
					deck.getmovetype(i + 1) << ')' << endl;
			}


			cout << "Which move will you use? : ";
			cin >> move_use;
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				if (move_use == i + 1)
				{
					if (deck.getmovetype(i + 1) == 'B')
					{
						if (deck.getmove(i + 1) == "Molotov Cocktail")
						{
							if (SG.flammable_stat == true)
							{
								SG.prog_made(-80);
							}
							else
							{
								SG.prog_made(-20);
							}
						}
						else if (deck.getmove(i + 1) == "Double Middle Finger")
						{
							if (SG.disturbed_stat == true)
							{
								SG.prog_made(-60);
							}
							else
							{
								SG.prog_made(-20);
							}
						}
						else if (deck.getmove(i + 1) == "Fake Punch" || deck.getmove(i + 1) == "Slap")
						{
							SG.prog_made(-10);
						}
						else if (deck.getmove(i + 1) == "Pepper Spray")
						{
							SG.prog_made(-15);
						}

						cout << "The Security Guard doesn't look happy..." << endl;
						cout << "The Security Guard cussed at you under his breath." << endl;

						me.set_dmg_taken(10);
					}
					else if (deck.getmovetype(i + 1) == 'C')
					{
						if (deck.getmove(i + 1) == "Bribe")
						{
							SG.prog_made(30);
						}
						else if (deck.getmove(i + 1) == "Kiss Ass")
						{
							SG.prog_made(60);
						}
						else if (deck.getmove(i + 1) == "Befriend")
						{
							SG.prog_made(30);
						}
						else if (deck.getmove(i + 1) == "Talk Shit")
						{
							SG.prog_made(45);
						}
						else if (deck.getmove(i + 1) == "Seduce")
						{
							SG.prog_made(60);
						}
						cout << "The Security Guard responded happily to me." << endl;
						me.set_dmg_taken(10);
					}
					else if (deck.getmovetype(i + 1) == 'G')
					{
						if (deck.getmove(i + 1) == "Gasoline")
						{
							me.set_dmg_taken(7);
							SG.set_flammable_stat(1);
						}
						else if (deck.getmove(i + 1) == "Muay Thai Block")
						{
							me.set_dmg_taken(5);
						}
						else if (deck.getmove(i + 1) == "Call Police")
						{
							me.set_dmg_taken(6);
						}
						else if (deck.getmove(i + 1) == "Baby meat shield")
						{
							me.set_dmg_taken(3);
							SG.set_disturbed_stat(1);
						}
						else //dodge
						{
							int dodge_success;
							dodge_success = rand() % 4 + 1;
							if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
							{
								cout << "Dodge successful" << endl;
								me.set_dmg_taken(0);
							}
							else
							{
								cout << "Did not dodge in time" << endl;
								me.set_dmg_taken(10);
							}
						}
					}
					else
					{
						if (deck.getmove(i + 1) == "Stare" && SG.disturbed_stat == true)
						{
							SG.prog_made(20);
						}
						else
						{
							SG.prog_made(10);
						}
						cout << "The Security Guard stared at me annoyedly." << endl;
						me.set_dmg_taken(10);
					}
				}
			}


			//system("CLS");
		}

		if (SG.getProg() >= 100)
		{
			cout << "You have defeated the Security Guard." << endl;
		}

		else
		{
			cout << "You lose" << endl;
		}
	}



	//battling the cyclist
	//randomize the movesets
	deck.setmove1();
	deck.setmove2();
	deck.setmove3();
	deck.setmove4();
	

	while (Cyclist.getProg() < 100 && me.gethealth() > 0)
	{
		cout << "Your current progress : " << me.gethealth() << " % to go" << endl;
		cout << "Progress made so far on the Cyclist is : " << Cyclist.getProg() << '%' << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << "Move" << i + 1 << ':' << deck.getmove(i + 1) << '(' <<
				deck.getmovetype(i + 1) << ')' << endl;
		}


		cout << "Which move will you use? : ";
		cin >> move_use;
		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			if (move_use == i + 1)
			{
				if (deck.getmovetype(i + 1) == 'B')
				{
					cout << "It doesn't affect the Cyclist as he protected himself using his bike." << endl;
					cout << "The Cyclist rammed you with his bike.";
					Cyclist.prog_made(10);
					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'C')
				{
					cout << "It doesn't affect the Cyclist as he cannot hear through his thick helmet." << endl;
					cout << "The Cyclist rammed you with his bike.";
					Cyclist.prog_made(10);
					me.set_dmg_taken(10);
				}
				else if (deck.getmovetype(i + 1) == 'G')
				{
					if (deck.getmove(i + 1) == "Gasoline")
					{
						me.set_dmg_taken(7);
						Cyclist.set_flammable_stat(1);
					}
					else if (deck.getmove(i + 1) == "Muay Thai Block")
					{
						me.set_dmg_taken(5);
					}
					else if (deck.getmove(i + 1) == "Call Police")
					{
						me.set_dmg_taken(6);
					}
					else if (deck.getmove(i + 1) == "Baby meat shield")
					{
						me.set_dmg_taken(3);
						Cyclist.set_disturbed_stat(1);
					}
					else //dodge
					{
						int dodge_success;
						dodge_success = rand() % 4 + 1;
						if (dodge_success == 1 || dodge_success == 2 || dodge_success == 3)
						{
							cout << "Dodge successful" << endl;
							me.set_dmg_taken(0);
						}
						else
						{
							cout << "Did not dodge in time" << endl;
							me.set_dmg_taken(10);
						}
					}

					cout << "The Cyclist rammed you with his bike.";
					Cyclist.prog_made(10);
				}
				else
				{
					cout << "The Cyclist rammed you with his bike.";
					Cyclist.prog_made(10);
					me.set_dmg_taken(10);
				}
			}
		}


		//system("CLS");
	}

	if (Cyclist.getProg() >= 100)
	{
		cout << "You have defeated the Cyclist." << endl;
	}

	else
	{
		cout << "You lose" << endl;
	}

	return 0;
}
