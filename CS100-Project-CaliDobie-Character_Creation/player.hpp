#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "character.hpp"
#include <iostream>
#include <string>

class Player : public Character {
    private:
        string name;
        int health;
        int EP;
        int strength;
        int magicPower;
        int physicalDefense;
        int magicDefense;
        int speed;
        string pClass;
        string alignment;
    public:
        void setName(string n){name = n;}
        void setHealth(int h){health = h;}
        void setEP(int e){EP = e;}
        void setStrength(int st){strength = st;}
        void setMagicPower(int mp){magicPower = mp;}
        void setPhysicalDefense(int pd){physicalDefense = pd;}
        void setMagicDefense(int md){magicDefense = md;}
        void setSpeed(int sp){speed = sp;}
        void setClass(string c){pClass = c;}
        void setAlignment(string a){alignment = a;}
        string getName(){return name;}
        int getHealth(){return health;}
        int getEP(){return EP;}
        int getStrength(){return strength;}
        int getMagicPower(){return magicPower;}
        int getPhysicalDefense(){return physicalDefense;}
        int getMagicDefense(){return magicDefense;}
        int getSpeed(){return speed;}
        string getClass(){return pClass;}
        string getAlignment(){return alignment;}
};
#endif //PLAYER_HPP
