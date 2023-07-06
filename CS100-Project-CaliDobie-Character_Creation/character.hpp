#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

using namespace std;
class Character {
    private:
        bool isPlayer;
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
        Character() {}
        virtual void setName(string n) = 0;
        virtual void setHealth(int h) = 0;
        virtual void setEP(int e) = 0;
        virtual void setStrength(int st) = 0;
        virtual void setMagicPower(int mp) = 0;
        virtual void setPhysicalDefense(int pd) = 0;
        virtual void setMagicDefense(int md) = 0;
        virtual void setSpeed(int sp) = 0;
        virtual void setClass(string c) = 0;
        virtual void setAlignment(string a) = 0;
        virtual string getName() = 0;
        virtual int getHealth() = 0;
        virtual int getEP() = 0;
        virtual int getStrength() = 0;
        virtual int getMagicPower() = 0;
        virtual int getPhysicalDefense() = 0;
        virtual int getMagicDefense() = 0;
        virtual int getSpeed() = 0;
        virtual string getClass() = 0;
        virtual string getAlignment() = 0;
        //virtual bool getType() = 0;
};
#endif //CHARACTER_HPP
