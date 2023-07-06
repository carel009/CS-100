#ifndef _CONSUMABLE_INVENTORY_H_
#define _CONSUMABLE_INVENTORY_H_

#include "items.h"
#include "consumables.h"
#include "healthPotion.h"
#include "epPotion.h"
#include "strengthPotion.h"
#include "physicalDefensePotion.h"
#include "magicPowerPotion.h"
#include "magicDefensePotion.h"
#include "speedPotion.h"

#include <string>
#include <vector>

using namespace std;

class consumableInventory {
private:

	int maximumSlots = 20;

public:

	vector<items*> consumableInventory;

	int consumableInventorySize() {
		return consumableInventory.size();
	}
	string getItemName(int i) {
		return consumableInventory.at(i)->getName();
	}

	void consumableInventoryAdd(items* object) {

		if (consumableInventory.size() <= 19) {
			consumableInventory.push_back(object);
			cout << "Item added into inventory" << endl;
		}
		else {
			cout << "Your inventory is full!" << endl;
		}

	}
	void consumableInventoryRemove(string name) {

		int flag = 0;

		for (unsigned int i = 0; i < consumableInventory.size(); ++i) {
			if ((consumableInventory.at(i)->getName()) == name && (flag == 0)) {
				consumableInventory.erase(consumableInventory.begin() + i);
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
	void consumableUse(string name, Character* player) {

		int flag = 0;

		for (unsigned int i = 0; i < consumableInventory.size(); ++i) {
			if ((consumableInventory.at(i)->getName()) == name && (flag == 0)) {
				consumableInventory.at(i)->doEffect(player);
				consumableInventory.erase(consumableInventory.begin() + i);
				flag = 1;
			}
		}
		if (flag == 1) {

			cout << "Item consumed." << endl;

		}
		else if (flag == 0) {

			cout << "No such item found." << endl;

		}

	}


};
#endif //_CONSUM