#ifndef _ARMOUR_SET_H_
#define _ARMOUR_SET_H_
#include "weaponary.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 3
class armourSet : public weaponary {

private:

	string name;
	int category;
	int effect;

public:

	armourSet(string name, int category, int effect) : weaponary() {
		setName(name);
		setCategory(category);
		setEffect(effect);
	}
	virtual string getName() {
		return name;
	}
	virtual void setName(string newName) {
		name = newName;
	}
	virtual int getCategory() {
		return category;
	}
	virtual void setCategory(int newCategory) {
		category = newCategory;
	}
	virtual int getEffect() {
		return effect;
	}
	virtual void setEffect(int newEffect) {
		effect = newEffect;
	}

	virtual void doEffect(Character* player) {

		int temp = player->getPhysicalDefense();
		temp += effect;
		player->setPhysicalDefense(temp);

	}

	virtual void undoEffect(Character* player) {

		int temp = player->getPhysicalDefense();
		temp -= effect;
		player->setPhysicalDefense(temp);
	}

};
#endif
