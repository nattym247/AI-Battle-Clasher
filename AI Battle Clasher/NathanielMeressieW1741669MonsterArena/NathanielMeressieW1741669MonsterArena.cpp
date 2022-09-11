// NathanielMeressieW1741669MonsterArena.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>
#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <array>
#include <stdlib.h>
#include <math.h>
#include <chrono>


//creature 1 race/profession variables
int creature1race;
int creature1profession;

//creature 1 stats variables
int creature1health;
int creature1strength;
int creature1dexterity;

//creature 1 abilities cooldowns variables
int creature1racialabilitycooldown;
int creature1professionabilitycooldown;

int creature1racialabilitycooldownchecker; //static racial cooldown number variable... to be used if the cooldown number has reached
int creature1professionabilitycooldownchecker;  //static profession cooldown number variable... to be used if the cooldown number has reached

//creature 1 racial abilities variables
bool creature1regen = false;
bool creature1charm = false;
bool creature1weaker = false;

//creature 1 profession abilities variables
bool creature1cleave = false;
bool creature1rush = false;
bool creature1bash = false;

int creature1combineddamage;

int creature1turn = false;

//---------------------------------------\\

//creature 2 race/profession variables
int creature2profession;
int creature2race;

//creature 2 stats variables
int creature2health;
int creature2strength;
int creature2dexterity;

//creature 2 abilities cooldowns variables
int creature2racialabilitycooldown;
int creature2professionabilitycooldown;

int creature2racialabilitycooldownchecker; //static racial cooldown number variable... to be used if the cooldown number has reached
int creature2professionabilitycooldownchecker;  //static profession cooldown number variable... to be used if the cooldown number has reached

//creature 2 racial abilities variables
bool creature2regen = false;
bool creature2charm = false;
bool creature2weaker = false;

//creature 2 profession abilities variables
bool creature2cleave = false;
bool creature2rush = false;
bool creature2bash = false;

int creature2combineddamage;

int creature2turn = false;

//other variables
int showstats;
int playagain;

//round counter variable
int roundcounter;



//adjustable time to change the pac of game variable
int timernumber = 1000;


using namespace std;

//PRINT STATS EVERY ROUND AFTER PLAYER 2s TURN FUNCTION
void statseveryround()
{
	{
		cout << "" << endl;
		cout << "STATS CHECK!" << endl;
		cout << "Creature ONE HEAlTH = " << creature1health << endl;
		cout << "Creature ONEs STRENGTH = " << creature1strength << endl;
		cout << "Creature ONEs DEXTERITY = " << creature1dexterity << endl;
		cout << creature1racialabilitycooldownchecker - creature1racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE ONE)!" << endl;
		cout << creature1professionabilitycooldownchecker - creature1professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE ONE)!" << endl;
		cout << "" << endl;

		Sleep(timernumber);

	}

	{
		cout << "Creature TWO HEAlTH = " << creature2health << endl;
		cout << "Creature TWOs STRENGTH = " << creature2strength << endl;
		cout << "Creature TWOs DEXTERITY = " << creature2dexterity << endl;
		cout << creature2racialabilitycooldownchecker - creature2racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE TWO)!" << endl;
		cout << creature2professionabilitycooldownchecker - creature2professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE TWO)!" << endl;
		cout << "" << endl;
		cout << "" << endl;

		Sleep(timernumber);
	}
}


class Creature
{
public:

	//Creature ONEs option of creature using their creature1race and creature1profession values

	void player1creaturechoice()
	{
		using namespace std;

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 1 && creature1profession == 1)
		{
			creature1health = 350;
			creature1strength = 15;
			creature1dexterity = 7;

			creature1professionabilitycooldown = 3;
			creature1racialabilitycooldown = 3;

			creature1racialabilitycooldownchecker = 3;
			creature1professionabilitycooldownchecker = 3;

			creature1regen = true;
			creature1cleave = true;


			cout << "" << endl;
			cout << "You picked Troll Gladiator as Creature ONE!" << endl;
			cout << "  Fused Strength = 15." << endl;
			cout << "  Fused Dexterity = 7." << endl;
			cout << "  Fused Health = 350." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);


		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 1 && creature1profession == 2)
		{
			creature1health = 280;
			creature1strength = 12;
			creature1dexterity = 12;

			creature1professionabilitycooldown = 3;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 3;
			creature1professionabilitycooldownchecker = 4;

			creature1regen = true;
			creature1rush = true;


			cout << "" << endl;
			cout << "You picked Troll Thug as Creature ONE!" << endl;
			cout << "  Fused Strength = 12." << endl;
			cout << "  Fused Dexterity = 12." << endl;
			cout << "  Fused Health = 280." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 1 && creature1profession == 3)
		{
			creature1health = 350;
			creature1strength = 20;
			creature1dexterity = 4;

			creature1professionabilitycooldown = 3;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 3;
			creature1professionabilitycooldownchecker = 4;

			creature1regen = true;
			creature1bash = true;


			cout << "" << endl;
			cout << "You picked Troll Brute as Creature ONE!" << endl;
			cout << "  Fused Strength = 20." << endl;
			cout << "  Fused Dexterity = 4." << endl;
			cout << "  Fused Health = 350." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 2 && creature1profession == 1)
		{
			creature1health = 300;
			creature1strength = 7;
			creature1dexterity = 15;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 3;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 3;

			creature1charm = true;
			creature1cleave = true;


			cout << "" << endl;
			cout << "You picked Sprite Gladiator as Creature ONE!" << endl;
			cout << "  Fused Strength = 7." << endl;
			cout << "  Fused Dexterity = 15." << endl;
			cout << "  Fused Health = 300." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 2 && creature1profession == 2)
		{
			creature1health = 230;
			creature1strength = 4;
			creature1dexterity = 20;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 3;

			creature1charm = true;
			creature1rush = true;


			cout << "" << endl;
			cout << "You picked Sprite Thug as Creature ONE!" << endl;
			cout << "  Fused Strength = 4." << endl;
			cout << "  Fused Dexterity = 20." << endl;
			cout << "  Fused Health = 230." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 2 && creature1profession == 3)
		{
			creature1health = 300;
			creature1strength = 12;
			creature1dexterity = 12;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 4;

			creature1charm = true;
			creature1bash = true;


			cout << "" << endl;
			cout << "You picked Sprite Brute as Creature ONE!" << endl;
			cout << "  Fused Strength = 12." << endl;
			cout << "  Fused Dexterity = 12." << endl;
			cout << "  Fused Health = 300." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 3 && creature1profession == 1)
		{
			creature1health = 330;
			creature1strength = 11;
			creature1dexterity = 11;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 3;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 3;

			creature1weaker = true;
			creature1cleave = true;


			cout << "" << endl;
			cout << "You picked Ghoul Gladiator as Creature ONE!" << endl;
			cout << "  Fused Strength = 11." << endl;
			cout << "  Fused Dexterity = 11." << endl;
			cout << "  Fused Health = 330" << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 3 && creature1profession == 2)
		{
			creature1health = 260;
			creature1strength = 8;
			creature1dexterity = 16;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 4;

			creature1weaker = true;
			creature1rush = true;


			cout << "" << endl;
			cout << "You picked Ghoul Thug as Creature ONE!" << endl;
			cout << "  Fused Strength = 8." << endl;
			cout << "  Fused Dexterity = 16." << endl;
			cout << "  Fused Health = 260" << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature1race == 3 && creature1profession == 3)
		{
			creature1health = 330;
			creature1strength = 16;
			creature1dexterity = 8;

			creature1professionabilitycooldown = 4;
			creature1racialabilitycooldown = 4;

			creature1racialabilitycooldownchecker = 4;
			creature1professionabilitycooldownchecker = 4;

			creature1weaker = true;
			creature1bash = true;


			cout << "" << endl;
			cout << "You picked Ghoul Brute as Creature ONE!" << endl;
			cout << "  Fused Strength = 16." << endl;
			cout << "  Fused Dexterity = 8." << endl;
			cout << "  Fused Health = 330." << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
		}
	}


	//Creature TWOs option of creature using their creature2race and creature2profession values

	void player2creaturechoice()
	{

		using namespace std;

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 1 && creature2profession == 1)
		{
			creature2health = 350;
			creature2strength = 15;
			creature2dexterity = 7;

			creature2regen = true;
			creature2cleave = true;

			creature2racialabilitycooldown = 3;
			creature2professionabilitycooldown = 3;

			creature2racialabilitycooldownchecker = 3;
			creature2professionabilitycooldownchecker = 3;

			cout << "" << endl;
			cout << "You picked Troll Gladiator as Creature TWO!" << endl;
			cout << "  Fused Strength = 15." << endl;
			cout << "  Fused Dexterity = 7." << endl;
			cout << "  Fused Health = 350." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 1 && creature2profession == 2)
		{
			creature2health = 280;
			creature2strength = 12;
			creature2dexterity = 12;

			creature2regen = true;
			creature2rush = true;

			creature2racialabilitycooldown = 3;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 3;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Troll Thug as Creature TWO!" << endl;
			cout << "  Fused Strength = 12." << endl;
			cout << "  Fused Dexterity = 12." << endl;
			cout << "  Fused Health = 280." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 1 && creature2profession == 3)
		{
			creature2health = 350;
			creature2strength = 20;
			creature2dexterity = 4;

			creature2regen = true;
			creature2bash = true;

			creature2racialabilitycooldown = 3;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 3;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Troll Brute as Creature TWO!" << endl;
			cout << "  Fused Strength = 20." << endl;
			cout << "  Fused Dexterity = 4." << endl;
			cout << "  Fused Health = 350." << endl;
			cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 2 && creature2profession == 1)
		{
			creature2health = 300;
			creature2strength = 7;
			creature2dexterity = 15;

			creature2charm = true;
			creature2cleave = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 3;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 3;

			cout << "" << endl;
			cout << "You picked Sprite Gladiator as Creature TWO!" << endl;
			cout << "  Fused Strength = 7." << endl;
			cout << "  Fused Dexterity = 15." << endl;
			cout << "  Fused Health = 300." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 2 && creature2profession == 2)
		{
			creature2health = 230;
			creature2strength = 4;
			creature2dexterity = 20;

			creature2charm = true;
			creature2rush = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Sprite Thug as Creature TWO!" << endl;
			cout << "  Fused Strength = 4." << endl;
			cout << "  Fused Dexterity = 20." << endl;
			cout << "  Fused Health = 230." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 2 && creature2profession == 3)
		{
			creature2health = 300;
			creature2strength = 12;
			creature2dexterity = 12;

			creature2charm = true;
			creature2bash = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Sprite Brute as Creature TWO!" << endl;
			cout << "  Fused Strength = 12." << endl;
			cout << "  Fused Dexterity = 12." << endl;
			cout << "  Fused Health = 300." << endl;
			cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 3 && creature2profession == 1)
		{
			creature2health = 330;
			creature2strength = 11;
			creature2dexterity = 11;

			creature2weaker = true;
			creature2cleave = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 3;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 3;

			cout << "" << endl;
			cout << "You picked Ghoul Gladiator as Creature TWO!" << endl;
			cout << "  Fused Strength = 11." << endl;
			cout << "  Fused Dexterity = 11." << endl;
			cout << "  Fused Health = 330" << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 3 && creature2profession == 2)
		{
			creature2health = 260;
			creature2strength = 8;
			creature2dexterity = 16;

			creature2weaker = true;
			creature2rush = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Ghoul Thug as Creature TWO!" << endl;
			cout << "  Fused Strength = 8." << endl;
			cout << "  Fused Dexterity = 16." << endl;
			cout << "  Fused Health = 260" << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}

		// set the values of health/strength and dexterity (including bonus values) instead of making new variables and adding the bonus values to the base values... intended to save memory whilst running game
		if (creature2race == 3 && creature2profession == 3)
		{
			creature2health = 330;
			creature2strength = 16;
			creature2dexterity = 8;

			creature2weaker = true;
			creature2bash = true;

			creature2racialabilitycooldown = 4;
			creature2professionabilitycooldown = 4;

			creature2racialabilitycooldownchecker = 4;
			creature2professionabilitycooldownchecker = 4;

			cout << "" << endl;
			cout << "You picked Ghoul Brute as Creature TWO!" << endl;
			cout << "  Fused Strength = 16." << endl;
			cout << "  Fused Dexterity = 8." << endl;
			cout << "  Fused Health = 330." << endl;
			cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;
			cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;
			cout << "" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

			Sleep(timernumber);

		}
	}

};

class Profession
{
public:

	//creature ONEs choice of profession function

	void player1professionchoosing()
	{

		using namespace std;

		cout << "Creature ONE selection:" << endl;
		cout << "1. Gladiator." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
		cout << "" << endl;

		cout << "2. Thug." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
		cout << "" << endl;

		cout << "3. Brute." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;


		cout << "" << endl;
		cout << "Pick a PROFESSION. From 1 to 3. For Creature ONE!" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
		cin >> creature1profession;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

		while (creature1profession < 1 || creature1profession > 3)
		{
			cout << "" << endl;
			cout << "You have entered a wrong input" << endl;
			cin >> creature1profession;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Try pick a profession, again..." << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cin >> creature1profession;
				cout << "--------------------------------------------------------------------------------------" << endl;
			}
		}
	}

	//creature TWOs choice of profession function

	void player2professionchoosing()
	{

		using namespace std;

		cout << "Creature ONE selection:" << endl;
		cout << "1. Gladiator." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Cleave. Deals strength+dexterity damage. Cooldown 3 turns." << endl;
		cout << "" << endl;

		cout << "2. Thug." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Rush. Deals 2*dexterity damage. Cooldown 4 turns." << endl;
		cout << "" << endl;

		cout << "3. Brute." << endl;
		cout << "  Bonus Strength = 6." << endl;
		cout << "  Bonus Dexterity = 6." << endl;
		cout << "  Bonus Health = 180." << endl;
		cout << "Profession Ability. Bash. Deals 2 times BASE strength damage. Cooldown 4 turns." << endl;


		cout << "" << endl;
		cout << "Pick a PROFESSION. From 1 to 3. For Creature TWO!" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
		cin >> creature2profession;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

		while (creature2profession < 1 || creature2profession > 3)
		{
			cout << "" << endl;
			cout << "You have entered a wrong input" << endl;
			cin >> creature2profession;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Try pick a profession, again..." << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cin >> creature2profession;
				cout << "--------------------------------------------------------------------------------------" << endl;
			}
		}
	}
};


class Race
{
public:

	//creature ONEs choice of race function

	void player1racechoosing()
	{
		using namespace std;

		cout << "Creature ONE selection:" << endl;
		cout << "1. Troll." << endl;
		cout << "  Base  = 10." << endl;
		cout << "  Base Dexterity = 2." << endl;
		cout << "  Boss Health = 200." << endl;
		cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
		cout << "" << endl;

		cout << "2. Sprite." << endl;
		cout << "  Base Strength = 2." << endl;
		cout << "  Base Dexterity = 10." << endl;
		cout << "  Boss Health = 150." << endl;
		cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
		cout << "" << endl;

		cout << "3. Ghoul." << endl;
		cout << "  Base Strength = 6." << endl;
		cout << "  Base Dexterity = 6." << endl;
		cout << "  Boss Health = 180." << endl;
		cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;

		cout << "" << endl;
		cout << "Pick a Race. From 1 to 3. For Creature ONE!" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
		cin >> creature1race;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

		while (creature1race < 1 || creature1race > 3)
		{
			cout << "" << endl;
			cout << "You have entered a wrong input" << endl;
			cin >> creature1race;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Try pick a RACE, again..." << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cin >> creature1race;
				cout << "--------------------------------------------------------------------------------------" << endl;
			}

		}
	}

	//creature TWOs choice of race function

	void player2racechoosing()
	{
		using namespace std;

		cout << "Creature TWO selection:" << endl;
		cout << "1. Troll." << endl;
		cout << "  Base Strength = 10." << endl;
		cout << "  Base Dexterity = 2." << endl;
		cout << "  Boss Health = 200." << endl;
		cout << "Racial Ability. Regenerate. Restores 40 health. Cooldown 3 turns." << endl;
		cout << "" << std::endl;

		cout << "2. Sprite." << endl;
		cout << "  Base Strength = 2." << endl;
		cout << "  Base Dexterity = 10." << endl;
		cout << "  Boss Health = 150." << endl;
		cout << "Racial Ability. Charm. Increases the opponent’s cooldown timers by 2. Cooldown 4 turns." << endl;
		cout << "" << endl;

		cout << "3. Ghoul." << endl;
		cout << "  Base Strength = 6." << endl;
		cout << "  Base Dexterity = 6." << endl;
		cout << "  Boss Health = 180." << endl;
		cout << "Racial Ability. Weaken. Reduces the opponent’s strength and dexterity by 1 each (but not below 1).Cooldown 4 turns." << endl;

		cout << "" << endl;
		cout << "Pick a Race. From 1 to 3. For Creature TWO!" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
		cin >> creature2race;
		cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;


		while (creature2race < 1 || creature2race > 3)
		{
			cout << "" << endl;
			cout << "You have entered a wrong input" << endl;
			cin >> creature2race;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Try pick a RACE, again..." << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cin >> creature2race;
				cout << "--------------------------------------------------------------------------------------" << endl;
			}

		}
	}
};


void creaturefighting()
{
	creature1turn = true;

	cout << "" << endl;
	cout << "Time to FIGHT!" << endl;
	cout << "" << endl;


	while (creature1health > 0 || creature2health > 0)
	{
		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}

		if (creature1turn == true)
		{
			if (creature1racialabilitycooldown >= creature1racialabilitycooldownchecker)
			{
				roundcounter = roundcounter + 1;

				cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "ROUND: " << roundcounter << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

				Sleep(timernumber);

				// creature one racial turn

				cout << "" << endl;
				cout << "" << endl;
				cout << "CREATURE ONE TURN!" << endl;

				Sleep(timernumber);

				if (creature1regen == true)
				{
					creature1health = creature1health + 40;

					creature1racialabilitycooldown = creature1racialabilitycooldown - 3;

					cout << "" << endl;
					cout << "Creature ONE uses Racial Ability REGENERATE!" << endl;
					cout << "Creature ONE restores 40 of their own Health!" << endl;
					cout << "" << endl;
					cout << "Creature ONE NEW HEAlTH = " << creature1health << endl;
					cout << "" << endl;

					Sleep(timernumber);

				}

				if (creature1charm == true)
				{

					creature2racialabilitycooldown = creature2racialabilitycooldown - 2;
					creature2professionabilitycooldown = creature2professionabilitycooldown - 2;


					creature1racialabilitycooldown = creature1racialabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature ONE uses Racial Ability CHARM!" << endl;
					cout << "Creature ONE pushes Creature TWOs cooldowns by 2 turns" << endl;
					cout << "" << endl;
					cout << "Creature TWO NEW RACIAL Ability cooldown = " << creature2racialabilitycooldownchecker - creature2racialabilitycooldown << " turns" << " AND " << "Creature TWO NEW PROFESSION Ability cooldown = " << creature2professionabilitycooldownchecker - creature2professionabilitycooldown << " turns" << " until next available to USE." << endl;
					cout << "" << endl;

					Sleep(timernumber);

				}

				if (creature1weaker == true)
				{
					if (creature2strength > 1 || creature2dexterity > 1)
					{
						cout << "" << endl;
						cout << "Creature ONE uses Racial Ability WEAKEN!" << endl;

						Sleep(timernumber);


						creature1racialabilitycooldown = creature1racialabilitycooldown - 4;

						if (creature2strength <= 1)
						{
							cout << "" << endl;
							cout << "Creature TWOs STRENGTH CANNOT GO ANY LOWER!" << endl;
							cout << "" << endl;

							Sleep(timernumber);
						}


						if (creature2strength > 1)
						{
							creature2strength = creature2strength - 1;

							cout << "Creature ONE decreases Creature TWOs strength by 1" << endl;
						}


						if (creature2dexterity <= 1)
						{
							cout << "" << endl;
							cout << "Creature TWOs DEXTERITY CANNOT GO ANY LOWER!" << endl;
							cout << "" << endl;

							Sleep(timernumber);

						}


						if (creature2dexterity > 1)
						{
							creature2dexterity = creature2dexterity - 1;

							cout << "Creature ONE decreases Creature TWOs dexterity by 1" << endl;

						}

						cout << "" << endl;
						cout << "Creature TWOs STRENGTH = " << creature2strength << " AND" << " Creature TWOs DEXTERITY = " << creature2dexterity << endl;

						Sleep(timernumber);
					}
				}

				if (creature1professionabilitycooldown != creature1professionabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "" << endl;
					cout << creature1professionabilitycooldownchecker - creature1professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE ONE)!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature1professionabilitycooldown >= creature1professionabilitycooldownchecker)
				{
					cout << "PROFESSION ABILITY AVAILABLE!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature1professionabilitycooldown < creature1professionabilitycooldownchecker)
				{
					creature1professionabilitycooldown = creature1professionabilitycooldown + 1;
				}

				creature1turn = false;
				creature2turn = true;

			}
		}

		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}

		if (creature2turn == true)
		{
			if (creature2racialabilitycooldown >= creature2racialabilitycooldownchecker)
			{

				// creature two racial turn

				cout << "" << endl;
				cout << "" << endl;
				cout << "CREATURE TWO TURN!" << endl;

				Sleep(timernumber);

				if (creature2regen == true)
				{
					creature2health = creature2health + 40;

					creature2racialabilitycooldown = creature2racialabilitycooldown - 3;

					cout << "" << endl;
					cout << "Creature TWO uses Racial Ability REGENERATE!" << endl;
					cout << "Creature TWO restores 40 of their own Health!" << endl;
					cout << "" << endl;
					cout << "Creature TWO NEW HEAlTH = " << creature2health << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2charm == true)
				{

					creature1racialabilitycooldown = creature1racialabilitycooldown - 2;
					creature1professionabilitycooldown = creature1professionabilitycooldown - 2;


					creature2racialabilitycooldown = creature2racialabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature TWO uses Racial Ability CHARM!" << endl;
					cout << "Creature TWO pushes Creature ONEs cooldowns by 2 turns" << endl;
					cout << "" << endl;
					cout << "Creature ONE NEW RACIAL Ability cooldown = " << creature1racialabilitycooldownchecker - creature1racialabilitycooldown << " AND " << "Creature ONE NEW PROFESSION Ability cooldown = " << creature1professionabilitycooldownchecker - creature1professionabilitycooldown << " turns" << " until next available to USE." << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature2weaker == true)
				{
					if (creature1strength > 1 || creature1dexterity > 1)
					{
						cout << "" << endl;
						cout << "Creature TWO uses Racial Ability WEAKEN!" << endl;

						Sleep(timernumber);


						creature2racialabilitycooldown = creature2racialabilitycooldown - 4;


						if (creature1strength > 1)
						{
							creature1strength = creature1strength - 1;

							cout << "Creature TWO decreases Creature ONEs strength by 1" << endl;
						}

						if (creature1dexterity > 1)
						{
							creature1dexterity = creature1dexterity - 1;

							cout << "Creature TWO decreases Creature ONEs dexterity by 1" << endl;

						}

						cout << "" << endl;
						cout << "Creature ONEs STRENGTH = " << creature1strength << " AND " << "Creature ONEs DEXTERITY = " << creature1dexterity << endl;


						Sleep(timernumber);


					}

				}


				if (creature1strength <= 1)
				{
					cout << "" << endl;
					cout << "Creature ONEs STRENGTH CANNOT GO ANY LOWER!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2dexterity <= 1)
				{
					cout << "" << endl;
					cout << "Creature ONEs DEXTERITY CANNOT GO ANY LOWER!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2professionabilitycooldown != creature2professionabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "" << endl;
					cout << creature2professionabilitycooldownchecker - creature2professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE TWO)!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2professionabilitycooldown >= creature2professionabilitycooldownchecker)
				{
					cout << "PROFESSION ABILITY AVAILABLE!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2professionabilitycooldown < creature2professionabilitycooldownchecker)
				{
					creature2professionabilitycooldown = creature2professionabilitycooldown + 1;
				}

				creature1turn = true;
				creature2turn = false;


				statseveryround(); //calling stats function to print after player 2s turn (end of round)

			}
		}


		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}


		// creature one profession turn

		if (creature1turn == true)
		{
			if (creature1professionabilitycooldown >= creature1professionabilitycooldownchecker)
			{
				roundcounter = roundcounter + 1;

				cout << "" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "ROUND: " << roundcounter << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

				Sleep(timernumber);


				cout << "" << endl;
				cout << "" << endl;
				cout << "CREATURE ONE TURN!" << endl;

				if (creature1cleave == true)
				{
					// Deals strength+dexterity damage

					creature1combineddamage = creature1strength + creature1dexterity;

					creature2health = creature2health - creature1combineddamage;

					creature1professionabilitycooldown = creature1professionabilitycooldown - 3;

					cout << "" << endl;
					cout << "Creature ONE uses Profession Ability CLEAVE!" << endl;
					cout << "Creature ONE deals " << creature1strength << " 'STRENGTH' + " << creature1dexterity << " 'DEXTERITY' = " << creature1strength + creature1dexterity << " TOTAL DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature TWO NEW HEAlTH = " << creature2health << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature1rush == true)
				{
					// Deals 2*dex damage

					creature1combineddamage = 2 * creature1dexterity;

					creature2health = creature2health - creature1combineddamage;

					creature1professionabilitycooldown = creature1professionabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature ONE uses Profession Ability RUSH!" << endl;
					cout << "Creature ONE deals " << creature1dexterity * 2 << " DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature TWO NEW HEAlTH = " << creature2health << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature1bash == true)
				{
					// Deals 2*strength damage

					creature1combineddamage = creature1strength * 2;

					creature2health = creature2health - creature1combineddamage;

					creature1professionabilitycooldown = creature1professionabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature ONE uses Profession Ability RUSH!" << endl;
					cout << "Creature ONE deals " << creature1strength * 2 << " DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature TWO NEW HEAlTH = " << creature2health << endl;
					cout << "" << endl;

					Sleep(timernumber);

				}

				if (creature1racialabilitycooldown != creature1racialabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "" << endl;
					cout << creature1racialabilitycooldownchecker - creature1racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE ONE)!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature1racialabilitycooldown >= creature1racialabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "RACIAL ABILITY AVAILABLE!" << endl;

					Sleep(timernumber);
				}

				if (creature1racialabilitycooldown < creature1racialabilitycooldownchecker)
				{
					creature1racialabilitycooldown = creature1racialabilitycooldown + 1;
				}

				creature1turn = false;
				creature2turn = true;

			}
		}


		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}

		// creature two profession turn

		if (creature2turn == true)
		{
			if (creature2professionabilitycooldown >= creature2professionabilitycooldownchecker)
			{
				cout << "" << endl;
				cout << "" << endl;
				cout << "CREATURE TWO TURN!" << endl;

				Sleep(timernumber);


				if (creature2cleave == true)
				{
					// Deals strength+dexterity damage

					creature2combineddamage = creature2strength + creature2dexterity;

					creature1health = creature1health - creature2combineddamage;

					creature2professionabilitycooldown = creature2professionabilitycooldown - 3;

					cout << "" << endl;
					cout << "Creature TWO uses Profession Ability CLEAVE!" << endl;
					cout << "Creature TWO deals " << creature2strength << " 'STRENGTH' + " << creature2dexterity << " 'DEXTERITY' = " << creature2strength + creature2dexterity << " TOTAL DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature ONE NEW HEAlTH = " << creature1health << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature2rush == true)
				{
					// Deals 2*dex damage

					creature2combineddamage = 2 * creature2dexterity;

					creature1health = creature1health - creature2combineddamage;

					creature2professionabilitycooldown = creature2professionabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature TWO uses Profession Ability RUSH!" << endl;
					cout << "Creature TWO deals " << creature2dexterity * 2 << " DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature ONE NEW HEAlTH = " << creature1health << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature2bash == true)
				{
					// Deals 2*strength damage

					creature2combineddamage = 2 * creature2strength;

					creature1health = creature1health - creature2combineddamage;

					creature2professionabilitycooldown = creature2professionabilitycooldown - 4;

					cout << "" << endl;
					cout << "Creature TWO uses Profession Ability BASH!" << endl;
					cout << "Creature TWO deals " << creature2strength * 2 << " DAMAGE!" << endl;
					cout << "" << endl;
					cout << "Creature ONE NEW HEAlTH = " << creature1health << endl;
					cout << "" << endl;


					Sleep(timernumber);

				}

				if (creature2racialabilitycooldown != creature2racialabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "" << endl;
					cout << creature2racialabilitycooldownchecker - creature2racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE TWO)!" << endl;
					cout << "" << endl;

					Sleep(timernumber);
				}

				if (creature2racialabilitycooldown >= creature2racialabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "RACIAL ABILITY AVAILABLE!" << endl;

					Sleep(timernumber);
				}

				if (creature2racialabilitycooldown < creature2racialabilitycooldownchecker)
				{
					creature2racialabilitycooldown = creature2racialabilitycooldown + 1;
				}

				creature1turn = true;
				creature2turn = false;

				statseveryround(); //calling stats function to print after player 2s turn (end of round)

			}
		}


		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}


		// normal turn after turn functions


		//creature two normal turn

		while (creature1turn == true)
		{
			if (creature1racialabilitycooldown < creature1racialabilitycooldownchecker)
			{
				if (creature1professionabilitycooldown < creature1professionabilitycooldownchecker)
				{
					roundcounter = roundcounter + 1;

					cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "ROUND: " << roundcounter << endl;
					cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

					//creature one turn

					cout << "" << endl;
					cout << "" << endl;
					cout << "CREATURE ONE TURN!" << endl;

					Sleep(timernumber);


					if (creature1racialabilitycooldown < creature1racialabilitycooldownchecker)
					{
						creature1racialabilitycooldown = creature1racialabilitycooldown + 1;
					}

					if (creature1professionabilitycooldown < creature1professionabilitycooldownchecker)
					{
						creature1professionabilitycooldown = creature1professionabilitycooldown + 1;
					}

					//if strength is more than dexterity than deals strength damage and if its equal to dexterity than it'll use the base attack type, "strength"
					if (creature1strength >= creature1dexterity)
					{
						cout << "" << endl;
						cout << "Creature ONE deals " << creature1strength << " 'STRENGTH' damage!" << endl;
						creature2health = creature2health - creature1strength;
						cout << "" << endl;
						cout << "Creature TWO HEAlTH = " << creature2health << endl;

						Sleep(timernumber);
					}

					if (creature1strength < creature1dexterity)
					{
						cout << "" << endl;
						cout << "Creature ONE deals " << creature1dexterity << " 'DEXTERITY' damage!" << endl;
						creature2health = creature2health - creature1dexterity;
						cout << "" << endl;
						cout << "Creature TWO HEAlTH = " << creature2health << endl;

						Sleep(timernumber);
					}

					cout << "" << endl;
					cout << "" << endl;
					cout << creature1racialabilitycooldownchecker - creature1racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE ONE)!" << endl;
					cout << creature1professionabilitycooldownchecker - creature1professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE ONE)!" << endl;
					cout << "" << endl;


					Sleep(timernumber);


					if (creature1racialabilitycooldown >= creature1racialabilitycooldownchecker)
					{
						cout << "" << endl;
						cout << "RACIAL ABILITY AVAILABLE!" << endl;

						Sleep(timernumber);
					}

					if (creature1professionabilitycooldown >= creature1professionabilitycooldownchecker)
					{
						cout << "PROFESSION ABILITY AVAILABLE!" << endl;
						cout << "" << endl;

						Sleep(timernumber);
					}

					creature1turn = false;
					creature2turn = true;

				}
			}
			break;
		}


		if (creature1health <= 0 || creature2health <= 0)
		{
			creature1turn = false;
			creature2turn = false;

			break;
		}

		//creature two normal turn

		while (creature2turn == true)
		{
			if (creature2racialabilitycooldown < creature2racialabilitycooldownchecker)
			{
				if (creature2professionabilitycooldown < creature2professionabilitycooldownchecker)
				{
					cout << "" << endl;
					cout << "" << endl;
					cout << "CREATURE TWO TURN!" << endl;
					cout << "" << endl;

					Sleep(timernumber);

					if (creature2racialabilitycooldown < creature2racialabilitycooldownchecker)
					{
						creature2racialabilitycooldown = creature2racialabilitycooldown + 1;
					}

					if (creature2professionabilitycooldown < creature2professionabilitycooldownchecker)
					{
						creature2professionabilitycooldown = creature2professionabilitycooldown + 1;
					}


					//if strength is more than dexterity than deals strength damage and if its equal to dexterity than it'll use the base attack type, "strength"
					if (creature2strength >= creature2dexterity)
					{
						cout << "" << endl;
						cout << "Creature TWO deals " << creature2strength << " 'STRENGTH' damage!" << endl;
						creature1health = creature1health - creature2strength;
						cout << "" << endl;
						cout << "Creature ONE HEAlTH = " << creature1health << endl;

						Sleep(timernumber);
					}

					if (creature2strength < creature2dexterity)
					{
						cout << "" << endl;
						cout << "Creature TWO deals " << creature2dexterity << " 'DEXTERITY' damage!" << endl;
						creature1health = creature1health - creature2dexterity;
						cout << "" << endl;
						cout << "Creature ONE HEAlTH = " << creature1health << endl;

						Sleep(timernumber);
					}

					cout << "" << endl;
					cout << "" << endl;
					cout << creature2racialabilitycooldownchecker - creature2racialabilitycooldown << " turn/s until RACIAL ability available! (CREATURE TWO)!" << endl;
					cout << creature2professionabilitycooldownchecker - creature2professionabilitycooldown << " turn/s until PROFESSION ability available! (CREATURE TWO)!" << endl;
					cout << "" << endl;


					Sleep(timernumber);


					if (creature2racialabilitycooldown >= creature2racialabilitycooldownchecker)
					{
						cout << "" << endl;
						cout << "RACIAL ABILITY AVAILABLE!" << endl;

						Sleep(timernumber);

					}

					if (creature2professionabilitycooldown >= creature2professionabilitycooldownchecker)
					{
						cout << "PROFESSION ABILITY AVAILABLE!" << endl;
						cout << "" << endl;

						Sleep(timernumber);

					}

					creature1turn = true;
					creature2turn = false;


					statseveryround(); //calling stats function to print after player 2s turn (end of round)

				}
			}
			break;
		}
	}
}



Profession profession;
Creature creatures;
Race race;

int main()
{

	system("color 2");
	// system("color %");

	roundcounter = 0;

	cout << "Welcome to Monster Arena" << endl;
	cout << "This is a simulation game." << endl;
	cout << "You can pick a RACE and PROFESSION. For two creatures to fight it out until one survives. " << endl;
	cout << "The RACE will be the base stats and ability. " << endl;
	cout << "The PROFESSION will be the bonus stats and ability the chosen race gets ontop of the BASE STATS.. " << endl;
	cout << "The creature will have two sources of attacks. Called STRENGTH or DEXTERITY. The attacks will use the damage with the highest value out of the two attacks types." << endl;
	cout << "Enjoy! " << endl;
	cout << "" << endl;


	//start of game functions
	int gamestart;


	//calling functions from seperate classes for creature 1s choice
	race.player1racechoosing();
	profession.player1professionchoosing();
	creatures.player1creaturechoice();


	//calling functions from seperate classes for creature 2s choice
	race.player2racechoosing();
	profession.player2professionchoosing();
	creatures.player2creaturechoice();


	//calling functions to start fighting between creatures, using set values from their choices
	creaturefighting();



	//if creature ones health reaches 0 first
	if (creature1health <= 0)
	{
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "CREATURE TWO HAS WON!!!" << endl;
		cout << "" << endl;
		cout << "" << endl;

		Sleep(1000);

		cout << "" << endl;
		cout << "Would you like to play simulate another battle? Either 1 to play again or 2 to exit." << endl;

		cin >> playagain;

		while (playagain < 1 || playagain > 2)
		{
			cout << "" << endl;
			cout << "Please press either 1 to simulate another battle or 2 to exit." << endl;
			cout << "" << endl;
			cin >> playagain;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> playagain;
			}
		}

		if (playagain == 1)
		{
			// deactivating all abilities for next round
			creature1regen = false;
			creature1charm = false;
			creature1weaker = false;

			creature1cleave = false;
			creature1rush = false;
			creature1bash = false;

			creature2regen = false;
			creature2charm = false;
			creature2weaker = false;

			creature2cleave = false;
			creature2rush = false;
			creature2bash = false;

			creature1combineddamage = 0;
			creature2combineddamage = 0;

			creature1turn = false;
			creature2turn = false;

			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			return main();
		}

		if (playagain == 2)
		{
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "THANK YOU FOR PLAYING MONSTER ARENA" << endl;
			cout << "HAVE A NICE DAY AND STAY SAFE. :)" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			exit(3);
		}
	}





	//if creature twos health reaches 0 first
	if (creature2health <= 0)
	{
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "CREATURE ONE HAS WON!!!" << endl;
		cout << "" << endl;
		cout << "" << endl;

		Sleep(1000);

		cout << "" << endl;
		cout << "Would you like to play simulate another battle? Either 1 to play again or 2 to exit." << endl;

		cin >> playagain;

		while (playagain < 1 || playagain > 2)
		{
			cout << "" << endl;
			cout << "Please press either 1 to simulate another battle or 2 to exit." << endl;
			cout << "" << endl;
			cin >> playagain;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> playagain;
			}
		}

		if (playagain == 1)
		{
			// deactivating all abilities for next round
			creature1regen = false;
			creature1charm = false;
			creature1weaker = false;

			creature1cleave = false;
			creature1rush = false;
			creature1bash = false;

			creature2regen = false;
			creature2charm = false;
			creature2weaker = false;

			creature2cleave = false;
			creature2rush = false;
			creature2bash = false;

			creature1combineddamage = 0;
			creature2combineddamage = 0;

			creature1turn = false;
			creature2turn = false;

			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			return main();
		}

		if (playagain == 2)
		{
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "THANK YOU FOR PLAYING MONSTER ARENA" << endl;
			cout << "HAVE A NICE DAY AND STAY SAFE. :)" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			exit(3);
		}
	}


}
