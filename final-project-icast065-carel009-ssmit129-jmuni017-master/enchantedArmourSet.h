#ifndef _ENCHANTED_ARMOUR_SET_H_
#define _ENCHANTED_ARMOUR_SET_H_
#include "weaponary.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 4
class enchantedArmourSet : public weaponary {

private:

	string name;
	int category;
	int effect;

public:

	enchantedArmourSet(string name, int category, int effect) : weaponary() {
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

		int temp = player->getMagicDefense();
		temp += effect;
		player->setMagicDefense(temp);

	}

	virtual void undoEffect(Character* player) {

		int temp = player->getMagicDefense();
		temp -= effect;
		player->setMagicDefense(temp);
	}

};
#endif