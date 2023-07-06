#include "character.hpp"
#include "player.hpp"
#include "inventory.h"
#include "consumableInventory.h"
#include "items.h"
#include "consumables.h"
#include "weaponary.h"
#include "healthPotion.h"
#include "epPotion.h"
#include "strengthPotion.h"
#include "physicalDefensePotion.h"
#include "magicPowerPotion.h"
#include "magicDefensePotion.h"
#include "speedPotion.h"
#include "sword.h"
#include "magicStaff.h"
#include "armourSet.h"
#include "enchantedArmourSet.h"
#include "scenes/Scene.hpp"
#include "scenes/Encounter/Encounter.hpp"
#include "scenes/Encounter/Combat/Combat.hpp"
#include "npc.hpp"
#include "foe.hpp"
#include "ally.hpp"
#include "spells/Spells.hpp"
#include "spells/MageSpells.hpp"
#include "spells/Level1MageSpell.hpp"
#include "spells/WarriorSpells.hpp"
#include "spells/Level1WarriorSpell.hpp"
#include "spells/KnightSpells.hpp"
#include "spells/Level1KnightSpells.hpp"
#include "spells/SpellManager.hpp"
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <story.cpp>
using namespace std;

int main()
{

    string name;
    int health;
    int EP;
    int strength;
    int magicPower;
    int physicalDefense;
    int magicDefense;
    int speed;
    string uClass;
    string alignment;
    SpellManager* playerSpells = new SpellManager;
    Spells* initialPlayerSpell;

    /*foe*/

    string fname;
    int fhealth;
    int fEP;
    int fstrength;
    int fmagicPower;
    int fphysicalDefense;
    int fmagicDefense;
    int fspeed;

    /*ally*/
    string aname;
    int ahealth;
    int aEP;
    int astrength;
    int amagicPower;
    int aphysicalDefense;
    int amagicDefense;
    int aspeed;

    Character* user = new Player;
    cout << "Enter your name: ";
    cin >> name;
    user->setName(name);

    cout << endl;

    cout << "Welcome " << user->getName() << endl;

    cout << endl;

    //cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: ";
    //int choice;
    //cin >> choice;
    
    bool choice_exit = false;
    char choice;
    
    while(!choice_exit)
    {
        cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: ";
        cin >> choice;
        if((choice == '1')||(choice == '2')||(choice == '3')) {choice_exit = true;}
        else {choice_exit = false;}
    }
    
    switch(choice)
    {
        case '1':
            /*mage*/
            health = 100;
            EP = 50;
            strength = 0;
            magicPower = 100;
            physicalDefense = 0;
            magicDefense = 100;
            speed = 50;
            uClass = "Mage";
            alignment = "Magic";
            initialPlayerSpell = new Level1MageSpell;
            break;
        case '2':
            /*warrior*/
            health = 100;
            EP = 50;
            strength = 100;
            magicPower = 0;
            physicalDefense = 100;
            magicDefense = 0;
            speed = 25;
            uClass = "Warrior";
            alignment = "Strength";
            initialPlayerSpell = new Level1WarriorSpell;
            break;
        case '3':
            /*knight*/
            health = 100;
            EP = 50;
            strength = 50;
            magicPower = 50;
            physicalDefense = 50;
            magicDefense = 50;
            speed = 38;
            uClass = "Knight";
            alignment = "Balanced";
            initialPlayerSpell = new Level1KnightSpells;
            break;
    }
    user->setHealth(health);
    user->setEP(EP);
    user->setStrength(strength);
    user->setMagicPower(magicPower);
    user->setPhysicalDefense(physicalDefense);
    user->setMagicDefense(magicDefense);
    user->setSpeed(speed);
    user->setClass(uClass);
    user->setAlignment(alignment);
    playerSpells->addSpell(initialPlayerSpell);

    cout << endl;

    cout << "You have selected: " << user->getClass() << endl;
    cout << "Alignment: " << user->getAlignment() << endl;
    cout << "Health: " << user->getHealth() << endl;
    cout << "EP: " << user->getEP() << endl;
    cout << "Strength: " << user->getStrength() << endl;
    cout << "Magic Power: " << user->getMagicPower() << endl;
    cout << "Physical Defense: " << user->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << user->getMagicDefense() << endl;
    cout << "Speed: " << user->getSpeed() << endl;

   // cout << "COMBAT TUTORIAL!!!!" << endl;

  //  Scene* combatScene = new Combat(user, playerSpells, 2);
  //  combatScene->SetUpScene();

    Character* ally_npc = new Ally;

    switch(choice)
    {
        case '1':
            /*mage ally*/
            aname = "Warrior(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 100;
            amagicPower = 0;
            aphysicalDefense = 100;
            amagicDefense = 0;
            aspeed = 25;
            break;
        case '2':
            /*warrior ally*/
            aname = "Mage(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 0;
            amagicPower = 100;
            aphysicalDefense = 0;
            amagicDefense = 100;
            aspeed = 50;
            break;
        case '3':
            /*knight ally*/
            aname = "Knight(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 50;
            amagicPower = 50;
            aphysicalDefense = 50;
            amagicDefense = 50;
            aspeed = 38;
            break;
    }

    ally_npc->setName(aname);
    ally_npc->setHealth(ahealth);
    ally_npc->setEP(aEP);
    ally_npc->setStrength(astrength);
    ally_npc->setMagicPower(amagicPower);
    ally_npc->setPhysicalDefense(aphysicalDefense);
    ally_npc->setMagicDefense(amagicDefense);
    ally_npc->setSpeed(aspeed);

    cout << endl;

    cout << "Your Ally:" << endl;
    cout << "Name: " << ally_npc->getName() << endl;
    cout << "Health: " << ally_npc->getHealth() << endl;
    cout << "EP: " << ally_npc->getEP() << endl;
    cout << "Strength: " << ally_npc->getStrength() << endl;
    cout << "Magic Power: " << ally_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << ally_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << ally_npc->getMagicDefense() << endl;
    cout << "Speed: " << ally_npc->getSpeed() << endl;

    /*created 10 foes*/
    Character* foe_1_npc = new Foe;
    Character* foe_2_npc = new Foe;
    Character* foe_3_npc = new Foe;
    Character* foe_4_npc = new Foe;
    Character* foe_5_npc = new Foe;
    Character* foe_6_npc = new Foe;
    Character* foe_7_npc = new Foe;
    Character* foe_8_npc = new Foe;
    Character* foe_9_npc = new Foe;
    Character* foe_10_npc = new Foe;

    /*foe1*/
    fname = "Foe_1";
    fhealth = 100;
    fEP = 25;
    fstrength = 25;
    fmagicPower = 25;
    fphysicalDefense = 25;
    fmagicDefense = 25;
    fspeed = 25;

    foe_1_npc->setName(fname);
    foe_1_npc->setHealth(fhealth);
    foe_1_npc->setEP(fEP);
    foe_1_npc->setStrength(fstrength);
    foe_1_npc->setMagicPower(fmagicPower);
    foe_1_npc->setPhysicalDefense(fphysicalDefense);
    foe_1_npc->setMagicDefense(fmagicDefense);
    foe_1_npc->setSpeed(fspeed);

    /*foe2*/
    fname = "Foe_2";
    fhealth = 120;
    fEP = 27;
    fstrength = 27;
    fmagicPower = 27;
    fphysicalDefense = 27;
    fmagicDefense = 27;
    fspeed = 27;

    foe_2_npc->setName(fname);
    foe_2_npc->setHealth(fhealth);
    foe_2_npc->setEP(fEP);
    foe_2_npc->setStrength(fstrength);
    foe_2_npc->setMagicPower(fmagicPower);
    foe_2_npc->setPhysicalDefense(fphysicalDefense);
    foe_2_npc->setMagicDefense(fmagicDefense);
    foe_2_npc->setSpeed(fspeed);

    /*foe3*/
    fname = "Foe_3";
    fhealth = 140;
    fEP = 29;
    fstrength = 29;
    fmagicPower = 29;
    fphysicalDefense = 29;
    fmagicDefense = 29;
    fspeed = 29;

    foe_3_npc->setName(fname);
    foe_3_npc->setHealth(fhealth);
    foe_3_npc->setEP(fEP);
    foe_3_npc->setStrength(fstrength);
    foe_3_npc->setMagicPower(fmagicPower);
    foe_3_npc->setPhysicalDefense(fphysicalDefense);
    foe_3_npc->setMagicDefense(fmagicDefense);
    foe_3_npc->setSpeed(fspeed);

    /*foe4*/
    fname = "Foe_4";
    fhealth = 160;
    fEP = 31;
    fstrength = 31;
    fmagicPower = 31;
    fphysicalDefense = 31;
    fmagicDefense = 31;
    fspeed = 31;

    foe_4_npc->setName(fname);
    foe_4_npc->setHealth(fhealth);
    foe_4_npc->setEP(fEP);
    foe_4_npc->setStrength(fstrength);
    foe_4_npc->setMagicPower(fmagicPower);
    foe_4_npc->setPhysicalDefense(fphysicalDefense);
    foe_4_npc->setMagicDefense(fmagicDefense);
    foe_4_npc->setSpeed(fspeed);

    /*foe5*/
    fname = "Foe_5";
    fhealth = 180;
    fEP = 33;
    fstrength = 33;
    fmagicPower = 33;
    fphysicalDefense = 33;
    fmagicDefense = 33;
    fspeed = 33;

    foe_5_npc->setName(fname);
    foe_5_npc->setHealth(fhealth);
    foe_5_npc->setEP(fEP);
    foe_5_npc->setStrength(fstrength);
    foe_5_npc->setMagicPower(fmagicPower);
    foe_5_npc->setPhysicalDefense(fphysicalDefense);
    foe_5_npc->setMagicDefense(fmagicDefense);
    foe_5_npc->setSpeed(fspeed);

    /*foe6*/
    fname = "Foe_6";
    fhealth = 200;
    fEP = 35;
    fstrength = 35;
    fmagicPower = 35;
    fphysicalDefense = 35;
    fmagicDefense = 35;
    fspeed = 35;

    foe_6_npc->setName(fname);
    foe_6_npc->setHealth(fhealth);
    foe_6_npc->setEP(fEP);
    foe_6_npc->setStrength(fstrength);
    foe_6_npc->setMagicPower(fmagicPower);
    foe_6_npc->setPhysicalDefense(fphysicalDefense);
    foe_6_npc->setMagicDefense(fmagicDefense);
    foe_6_npc->setSpeed(fspeed);

    /*foe7*/
    fname = "Foe_7";
    fhealth = 220;
    fEP = 33;
    fstrength = 33;
    fmagicPower = 33;
    fphysicalDefense = 33;
    fmagicDefense = 33;
    fspeed = 33;

    foe_7_npc->setName(fname);
    foe_7_npc->setHealth(fhealth);
    foe_7_npc->setEP(fEP);
    foe_7_npc->setStrength(fstrength);
    foe_7_npc->setMagicPower(fmagicPower);
    foe_7_npc->setPhysicalDefense(fphysicalDefense);
    foe_7_npc->setMagicDefense(fmagicDefense);
    foe_7_npc->setSpeed(fspeed);

    /*foe8*/
    fname = "Foe_8";
    fhealth = 240;
    fEP = 31;
    fstrength = 31;
    fmagicPower = 31;
    fphysicalDefense = 31;
    fmagicDefense = 31;
    fspeed = 31;

    foe_8_npc->setName(fname);
    foe_8_npc->setHealth(fhealth);
    foe_8_npc->setEP(fEP);
    foe_8_npc->setStrength(fstrength);
    foe_8_npc->setMagicPower(fmagicPower);
    foe_8_npc->setPhysicalDefense(fphysicalDefense);
    foe_8_npc->setMagicDefense(fmagicDefense);
    foe_8_npc->setSpeed(fspeed);

    /*foe9*/
    fname = "Foe_9";
    fhealth = 260;
    fEP = 29;
    fstrength = 29;
    fmagicPower = 29;
    fphysicalDefense = 29;
    fmagicDefense = 29;
    fspeed = 29;

    foe_9_npc->setName(fname);
    foe_9_npc->setHealth(fhealth);
    foe_9_npc->setEP(fEP);
    foe_9_npc->setStrength(fstrength);
    foe_9_npc->setMagicPower(fmagicPower);
    foe_9_npc->setPhysicalDefense(fphysicalDefense);
    foe_9_npc->setMagicDefense(fmagicDefense);
    foe_9_npc->setSpeed(fspeed);

    /*foe10*/
    fname = "Foe_10";
    fhealth = 200;
    fEP = 25;
    fstrength = 25;
    fmagicPower = 25;
    fphysicalDefense = 25;
    fmagicDefense = 25;
    fspeed = 25;

    foe_10_npc->setName(fname);
    foe_10_npc->setHealth(fhealth);
    foe_10_npc->setEP(fEP);
    foe_10_npc->setStrength(fstrength);
    foe_10_npc->setMagicPower(fmagicPower);
    foe_10_npc->setPhysicalDefense(fphysicalDefense);
    foe_10_npc->setMagicDefense(fmagicDefense);
    foe_10_npc->setSpeed(fspeed);
    /*foe stat check*/
    /*
    cout << endl << endl << endl;
    cout << "foe Stats:" << endl;

    cout << endl;
    cout << "Name: " << foe_1_npc->getName() << endl;
    cout << "Health: " << foe_1_npc->getHealth() << endl;
    cout << "EP: " << foe_1_npc->getEP() << endl;
    cout << "Strength: " << foe_1_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_1_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_1_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_1_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_1_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_2_npc->getName() << endl;
    cout << "Health: " << foe_2_npc->getHealth() << endl;
    cout << "EP: " << foe_2_npc->getEP() << endl;
    cout << "Strength: " << foe_2_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_2_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_2_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_2_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_2_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_3_npc->getName() << endl;
    cout << "Health: " << foe_3_npc->getHealth() << endl;
    cout << "EP: " << foe_3_npc->getEP() << endl;
    cout << "Strength: " << foe_3_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_3_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_3_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_3_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_3_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_4_npc->getName() << endl;
    cout << "Health: " << foe_4_npc->getHealth() << endl;
    cout << "EP: " << foe_4_npc->getEP() << endl;
    cout << "Strength: " << foe_4_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_4_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_4_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_4_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_4_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_5_npc->getName() << endl;
    cout << "Health: " << foe_5_npc->getHealth() << endl;
    cout << "EP: " << foe_5_npc->getEP() << endl;
    cout << "Strength: " << foe_5_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_5_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_5_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_5_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_5_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_6_npc->getName() << endl;
    cout << "Health: " << foe_6_npc->getHealth() << endl;
    cout << "EP: " << foe_6_npc->getEP() << endl;
    cout << "Strength: " << foe_6_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_6_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_6_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_6_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_6_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_7_npc->getName() << endl;
    cout << "Health: " << foe_7_npc->getHealth() << endl;
    cout << "EP: " << foe_7_npc->getEP() << endl;
    cout << "Strength: " << foe_7_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_7_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_7_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_7_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_7_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_8_npc->getName() << endl;
    cout << "Health: " << foe_8_npc->getHealth() << endl;
    cout << "EP: " << foe_8_npc->getEP() << endl;
    cout << "Strength: " << foe_8_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_8_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_8_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_8_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_8_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_9_npc->getName() << endl;
    cout << "Health: " << foe_9_npc->getHealth() << endl;
    cout << "EP: " << foe_9_npc->getEP() << endl;
    cout << "Strength: " << foe_9_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_9_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_9_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_9_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_9_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_10_npc->getName() << endl;
    cout << "Health: " << foe_10_npc->getHealth() << endl;
    cout << "EP: " << foe_10_npc->getEP() << endl;
    cout << "Strength: " << foe_10_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_10_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_10_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_10_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_10_npc->getSpeed() << endl;
    */

	//Variables for game maintenance & operation
	char input;
	bool exit = false;
	story* curr_game = new story();

	//Clear Screen
	
	
	//Game 
	string line;
	ifstream intro ("intro.txt");
	if(intro.is_open()){
		while(getline(intro,line)){
			cout << line << '\n';
		}
		intro.close();
	}

	else cout << "Unable to open file";

	cout << endl << endl;
	cout << "Welcome to the city of Coruvon, Champion" << endl << endl;
	cout << "I can see what you seek in your heart..." << endl;
	cout << "Just up ahead is an inn where you might find some information" << endl;

	while(!exit){
		cout << "...press 'a' to continue..." << endl;
		cin >> input;
		if(input == 'a'){exit = true;}
		else{exit = false;}
	}

	cin.clear();
	input = 0;
	//system("cls");
	exit = false;
	
	  srand (time(NULL));
	bool rumor_true = false;
	int rumor = rand() % 11 + 1;
	curr_game->set_rumor(rumor);
	if(rumor <= 10){rumor_true = true;}

	cout << "The innkeeper tells you that" << " there is an ironflow in the east." << endl;
    //rumomrs[rumor] << endl;
	cout << "He also tells you that, built on the ironflow, Coruvon started as a small military outpost\n";
	cout <<	"built on a hilltop just east of the massive expansive of swamp known as the Black Mire.\n";
	cout <<	"Today Coruvon is best known a the classic frontier town - rough and mostly lawless, built up\n";
	cout <<	"around a gladitorial arena that has been the primary distraction for the city's garrisons for\n";
	cout <<	"the last decade.\n\n";
	cout << "With the end of trade along the Ironflow, the city is slowly shrinking as merchants leave\n";
	cout <<	"for better markets. Most people coming to the city are either the garrison troops, fishers\n";
	cout <<	"bringing their harvests, and adventurers and would-be adventurers using Coruvon as a final\n";
	cout <<	"launching point for their explorations of the Black Mire or the dwarven ruins.\n\n\n";
	

        while(!exit){
                cout << "...press 'a' to continue..." << endl;
                cin >> input;
                if(input == 'a'){exit = true;}
                else{exit = false;}
        }
	
        cin.clear();
        input = 0;
       // system("cls");
	exit = false;

	cout << "You leave the inn and approach a road, which forks right or left\n";
        while(!exit){
                cout << "...make your choice...[r/l]..." << endl;
                cin >> input;
                if(( input == 'r')||(input=='l') ){exit = true;}
                else{exit = false;}
        }

	char choice1 = input;

        cin.clear();
        input = 0;
       	//clear screen
        exit = false;

    vector<Character*> fight1;
    fight1.push_back(foe_1_npc);
    Scene* fight1_combat  = new Combat(fight1, user, playerSpells);
    fight1_combat->SetUpScene();
	if(choice1 == 'r'){ 
		cout <<"Crocodiles Appear From the Mire! Ready yourself!" << endl;
		Scene* testCombat3  = new Combat(fight1, user, playerSpells);
		testCombat3->SetUpScene();
	}
	else{ cout << "A Giant Catfish leaps from the water! AHH!" <<endl;
        vector<Character*> fight2;
        fight2.push_back(foe_2_npc);
		Scene* fight_Combat2 = new Combat(fight2, user, playerSpells);
		fight_Combat2->SetUpScene();
 	 }
	
	cout << "That was close... let's move on down the road" << endl;
	vector<Character*> fight3;
	fight3.push_back(foe_3_npc);

	if(!rumor_true){
		cout <<"Up ahead you see a group of troglodytes, get ready to fight!"<<endl;
		Scene* fight_combat3 = new Combat(fight3, user, playerSpells);
		fight_combat3->SetUpScene();
	}

	cin.clear();
        input = 0;
        //system("cls");
        exit = false;

	cout << "You come across a strange statue...it seems to speak to you, but not in words,\n";
	cout <<	"It seems to slip phrase directly into your mind\n";
	cout <<	"[The statue says] Ages ago, on another world, I fought a great battle against a\n";
	cout <<	"giant people. These Giatns are the same kind you will likely encounter on your journey...\n";
	cout <<	"And I can help you...\n";
	cout <<	"But first you must help me!\n";
	cout <<	"I was once married to a beautiful woman.\n";
	cout <<	"When we were engaged she was given an iron rose, and me a basket of amber\n";
	cout <<	"Bring me these things, and I will give you something to defeat the giants\n";
	cout << "[end of dialogue]\n";

	cin.clear();
        input = 0;
        //system("cls");
        exit = false;

	cout << "Well that was strange...Let's get out of here and see if that old frog has any truth in him\n";
	
	cout << "[Another fork in the road presents itself, this time in three ways]\n";
	        
        while(!exit){
                cout << "...make your choice...[r/m/l]..." << endl;
                cin >> input;
                if(( input == 'r')||(input=='l')||(input=='m') ){exit = true;}
                else{exit = false;}
        }

	char choice2 = input;
        cin.clear();
        input = 0;
        //system("cls");
        exit = false;

	int trial1 = 0;
	
	vector<Character*> fight4;
	fight4.push_back(foe_4_npc);
	if(choice2 == 1){
		cout << "The smell of this place is so strong your eyes are failing you" << endl;
		cout << "Where am I?\n";
		cout <<	"A shriek lets out from the distance\n";
		Scene* testCombat4 = new Combat(fight4,user,playerSpells);
		testCombat4->SetUpScene();
	        curr_game->set_trial(true,1);
		
	}
	else if(choice2 == 2){
		cout << "The water becomes deeper\n";
		cout <<	"You are now swimming through mangroves, lillies, and something else lurks\n";
		cout <<	"You reach a boat made out of a giatn wicker basket\n";
		cout <<	"This must be it!\n";
        cout << "Scene* testCombat5 = new Combat(fight5,user,playerSpells)";
        vector<Character*> fight5;
        fight5.push_back(foe_5_npc);
        Scene* testCombat5 =  new Combat(fight5, user, playerSpells);
        testCombat5->SetUpScene();
		curr_game->set_trial(true,2);
		}
	else{
		cout << "The rain pours down relentlessly\n";
		cout <<	"And what's more, something bites your foot\n";
		cout <<	"This ground is not safe, but we must carry on\n";
		cout <<	"The thorns, which have already gotten to your foot, now surround you\n";
		cout <<	"Hacking through the thicket, you come across the creatures that gaurd this place\n";
        vector<Character*> fight6;
        fight6.push_back(foe_6_npc);
        Scene* testCombat4 = new Combat(fight4,user,playerSpells);
        testCombat4->SetUpScene();
		curr_game->set_trial(true,3);
		}

	cout << "You carry on, weary and damaged, but determined in your voyage" << endl;
	cout << ".............................................................." << endl;
	cout << "[you say] I have returned! Frog! Grant me your tools and i will release these wedding presents!\n";
	cout << "[frog says]...So bet it, traveler, take this from me\n";

	//get itemEnd

	//system("cls");
	cout << "Goodbye " << user->getName() << "\n";
	return 0;
}
