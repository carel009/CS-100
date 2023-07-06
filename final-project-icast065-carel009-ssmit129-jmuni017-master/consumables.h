#ifndef _CONSUMABLES_H_
#define _CONSUMABLES_H_

#include "items.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;

class consumables : public items {

private:

    string name;
    int category;
    int effect;

public:

    consumables() : items() {};
    virtual string getName() = 0;
    virtual void setName(string newName) = 0;
    virtual int getCategory() = 0;
    virtual void setCategory(int newCategory) = 0;
    virtual int getEffect() = 0;
    virtual void setEffect(int newEffect) = 0;
    virtual void doEffect(Character* player) = 0;
    virtual void undoEffect(Character* player) = 0;

};
#endif


