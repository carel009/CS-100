#ifndef FOE_HPP
#define FOE_HPP

#include "npc.hpp"
#include <string>

class Foe : public NPC {
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
#endif //FOE_HPP
