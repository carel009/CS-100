#ifndef ALLY_HPP
#define ALLY_HPP

#include "npc.hpp"
#include <vector>
#include <string>


class Ally : public NPC {
    private:
        string name;
        string alignment;
        string pClass;
        int health;
        int EP;
        int strength;
        int magicPower;
        int physicalDefense;
        int magicDefense;
        int speed;
    public:
        virtual void setClass(string s) {
            pClass = s;
        }
        virtual void setAlignment(string a) {
            alignment = a;
        }
        virtual void setName(string n){name = n;}
        virtual void setHealth(int h){health = h;}
        virtual void setEP(int e){EP = e;}
        virtual void setStrength(int st){strength = st;}
        virtual void setMagicPower(int mp){magicPower = mp;}
        virtual void setPhysicalDefense(int pd){physicalDefense = pd;}
        virtual void setMagicDefense(int md){magicDefense = md;}
        virtual void setSpeed(int sp){speed = sp;}
        virtual string getName(){return name;}
        virtual string getClass() {
            return pClass;
        }
        virtual string getAlignment() {
            return alignment;
        }
        virtual int getHealth(){return health;}
        virtual int getEP(){return EP;}
        virtual int getStrength(){return strength;}
        virtual int getMagicPower(){return magicPower;}
        virtual int getPhysicalDefense(){return physicalDefense;}
        virtual int getMagicDefense(){return magicDefense;}
        virtual int getSpeed(){return speed;}
        virtual bool getType() {
            return true;
        }
};
#endif //ALLY_HPP
