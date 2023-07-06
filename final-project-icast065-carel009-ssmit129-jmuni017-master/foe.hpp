#ifndef FOE_HPP
#define FOE_HPP

#include "npc.hpp"
#include <string>

class Foe : public NPC {
private:
    string name;
    string enClass;
    string alignment;
    int health;
    int EP;
    int strength;
    int magicPower;
    int physicalDefense;
    int magicDefense;
    int speed;
public:
    virtual void setName(string n){name = n;}
    virtual void setHealth(int h){health = h;}
    virtual void setEP(int e){EP = e;}
    virtual void setStrength(int st){strength = st;}
    virtual void setMagicPower(int mp){magicPower = mp;}
    virtual void setPhysicalDefense(int pd){physicalDefense = pd;}
    virtual void setMagicDefense(int md){magicDefense = md;}
    virtual void setSpeed(int sp){speed = sp;}
    virtual void setClass(string s) {enClass = s;}
    virtual void setAlignment(string a) {alignment = a;}
    virtual string getClass() {return enClass;}
    virtual string getAlignment() {return alignment;}
    virtual string getName(){return name;}
    virtual int getHealth(){return health;}
    virtual int getEP(){return EP;}
    virtual int getStrength(){return strength;}
    virtual int getMagicPower(){return magicPower;}
    virtual int getPhysicalDefense(){return physicalDefense;}
    virtual int getMagicDefense(){return magicDefense;}
    virtual int getSpeed(){return speed;}
    virtual bool getType() {return false;}
};
#endif //FOE_HPP
