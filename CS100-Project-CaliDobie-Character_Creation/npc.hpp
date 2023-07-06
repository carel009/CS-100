#ifndef NPC_HPP
#define NPC_HPP

#include "character.hpp"

class NPC {
    private:
        string name;
        int health;
        int EP;
        int strength;
        int magicPower;
        int physicalDefense;
        int magicDefense;
        int speed;
    public:
        NPC() {}
	void setName(string n){name = n;}
        void setHealth(int h){health = h;}
        void setEP(int e){EP = e;}
        void setStrength(int st){strength = st;}
        void setMagicPower(int mp){magicPower = mp;}
        void setPhysicalDefense(int pd){physicalDefense = pd;}
        void setMagicDefense(int md){magicDefense = md;}
        void setSpeed(int sp){speed = sp;}
        string getName(){return name;}
        int getHealth(){return health;}
        int getEP(){return EP;}
        int getStrength(){return strength;}
        int getMagicPower(){return magicPower;}
        int getPhysicalDefense(){return physicalDefense;}
        int getMagicDefense(){return magicDefense;}
        int getSpeed(){return speed;}
};
#endif //NPC_HPP
