#ifndef _INVENTORY_H_
#define _INVENTORY_H_

#include "items.h"
#include "weaponary.h"
#include "sword.h"
#include "magicStaff.h"
#include "armourSet.h"
#include "enchantedArmourSet.h"

#include <string>
#include <vector>
using namespace std;

class inventory {
private:

    int maximumSlots = 10;

public:

    vector<items*> inventory;

    int inventorySize() {
        return inventory.size();
    }
    string getItemName(int i) {
        return inventory.at(i)->getName();
    }

    void inventoryAdd(items* object) {

        if (inventory.size() <= 9) {
            inventory.push_back(object);
            cout << "Item added into inventory" << endl;
        }
        else {
            cout << "Your inventory is full!" << endl;
        }

    }

    void inventoryRemove(string name) {

        int flag = 0;

        for (unsigned int i = 0; i < inventory.size(); ++i) {
            if ((inventory.at(i)->getName()) == name && (flag == 0)) {
                inventory.erase(inventory.begin() + i);
                flag = 1;
            }
        }
        if (flag == 1) {

            cout << "Item removed." << endl;

        }
        else if (flag == 0) {

            cout << "No such item found." << endl;

        }

    }

    void inventoryEquip(string name, Character* player) {

        int flag = 0;

        for (unsigned int i = 0; i < inventory.size(); ++i) {
            if ((inventory.at(i)->getName()) == name && (flag == 0)) {
                inventory.at(i)->doEffect(player);
                flag = 1;
            }
        }
        if (flag == 1) {

            cout << "Item equipped." << endl;

        }
        else if (flag == 0) {

            cout << "No such item found." << endl;

        }

    }

    void inventoryDequip(string name, Character* player) {

        int flag = 0;

        for (unsigned int i = 0; i < inventory.size(); ++i) {
            if ((inventory.at(i)->getName()) == name && (flag == 0)) {
                inventory.at(i)->undoEffect(player);
                flag = 1;
            }
        }
        if (flag == 1) {

            cout << "Item unequipped." << endl;

        }
        else if (flag == 0) {

            cout << "No such item found." << endl;

        }

    }

};
#endif //_INVENTORY_H_