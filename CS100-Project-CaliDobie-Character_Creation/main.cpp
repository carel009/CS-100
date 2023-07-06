#include <iostream>
#include <string>
using namespace std;

#include "character.hpp"
#include "player.hpp"
#include "npc.hpp"
#include "foe.hpp"
#include "ally.hpp"

int main()
{
    /*user*/
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

    cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: ";
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
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
            break;
        case 2:
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
            break;
        case 3:
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
    
    NPC* ally_npc = new Ally;
    
    switch(choice)
    {
        case 1:
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
        case 2:
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
        case 3:
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
    NPC* foe_1_npc = new Foe;
    NPC* foe_2_npc = new Foe;
    NPC* foe_3_npc = new Foe;
    NPC* foe_4_npc = new Foe;
    NPC* foe_5_npc = new Foe;
    NPC* foe_6_npc = new Foe;
    NPC* foe_7_npc = new Foe;
    NPC* foe_8_npc = new Foe;
    NPC* foe_9_npc = new Foe;
    NPC* foe_10_npc = new Foe;

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
    cout << "Foe Stats:" << endl;
    
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

    return 0;
}
