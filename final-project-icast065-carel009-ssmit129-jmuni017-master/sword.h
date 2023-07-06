#ifndef _SWORD_H_
#define _SWORD_H_
#include "weaponary.h"
#include "character.hpp"
#include "player.hpp"
#include "weaponary.h"
#include <string>
#include <vector>

using namespace std;
//category 1
class sword : public weaponary {

private:

	string name;
	int category;
	int effect;

public:

	sword(string name, int category, int effect) : weaponary() {
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

		int temp = player->getStrength();
		temp += effect;
		player->setStrength(temp);

	}

	virtual void undoEffect(Character* player) {

		int temp = player->getStrength();
		temp -= effect;
		player->setStrength(temp);
	}

};
#endif
