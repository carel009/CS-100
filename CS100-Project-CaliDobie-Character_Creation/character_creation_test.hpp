#ifndef __CHARACTER_CREATION_TEST_HPP__
#define __CHARACTER_CREATION_TEST_HPP__

#include "gtest/gtest.h"

#include "character.hpp"
#include "player.hpp"
#include "npc.hpp"
#include "foe.hpp"
#include "ally.hpp"

TEST(Player, SetName){
	Character* user = new Player;
        user->setName("chris");
	
        EXPECT_EQ("chris", user->getName());
}

TEST(Player, ClassSelection1){
        Character* user = new Player;
	string uClass;
	bool choice_exit = false;
        char choice = '1';

	if((choice == '1')||(choice == '2')||(choice == '3')) {choice_exit = true;}
        else {choice_exit = false;}
    
        switch(choice)
        {
            case '1':
                /*mage*/
                uClass = "Mage";
                break;
            case '2':
                /*warrior*/
                uClass = "Warrior";
                break;
            case '3':
                /*knight*/
                uClass = "Knight";
                break;
        }

        user->setClass(uClass);
	EXPECT_EQ(true, choice_exit);
        EXPECT_EQ("Mage", user->getClass());
}

TEST(Player, ClassSelection2){
        Character* user = new Player;
	string uClass;
        bool choice_exit = false;
        char choice = '2';

	if((choice == '1')||(choice == '2')||(choice == '3')) {choice_exit = true;}
        else {choice_exit = false;}

        switch(choice)
        {
            case '1':
                /*mage*/
                uClass = "Mage";
                break;
            case '2':
                /*warrior*/
                uClass = "Warrior";
                break;
            case '3':
                /*knight*/
                uClass = "Knight";
                break;
        }

        user->setClass(uClass);
	EXPECT_EQ(true, choice_exit);
        EXPECT_EQ("Warrior", user->getClass());
}

TEST(Player, ClassSelection3){
        Character* user = new Player;
	string uClass;
        bool choice_exit = false;
        char choice = '3';

        if((choice == '1')||(choice == '2')||(choice == '3')) {choice_exit = true;}
	else {choice_exit = false;}

        switch(choice)
        {
            case '1':
                /*mage*/
                uClass = "Mage";
                break;
            case '2':
                /*warrior*/
                uClass = "Warrior";
                break;
            case '3':
                /*knight*/
                uClass = "Knight";
                break;
        }

        user->setClass(uClass);
	EXPECT_EQ(true, choice_exit);
        EXPECT_EQ("Knight", user->getClass());
}

TEST(Player, ClassSelection4){
        Character* user = new Player;
        string uClass;
        bool choice_exit = false;
        char choice = '4';

        if((choice == '1')||(choice == '2')||(choice == '3')) {choice_exit = true;}
        else {choice_exit = false;}

        switch(choice)
        {
            case '1':
                /*mage*/
                uClass = "Mage";
                break;
            case '2':
                /*warrior*/
                uClass = "Warrior";
                break;
            case '3':
                /*knight*/
                uClass = "Knight";
                break;
        }

        user->setClass(uClass);
        EXPECT_EQ(false, choice_exit);
}

#endif //__CHARACTER_CREATION_TEST_HPP__
