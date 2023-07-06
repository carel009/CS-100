#ifndef _MAGIC_STAFF_H_
#define _MAGIC_STAFF_H_
#include "weaponary.h"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 2
class magicStaff : public weaponary {

private:

	string name;
	int category;
	int effect;

public:

	magicStaff(string name, int category, int effect) : weaponary() {
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

		int temp = player->getMagicPower();
		temp += effect;
		player->setMagicPower(temp);

	}

	virtual void undoEffect(Character* player) {

		int temp = player->getMagicPower();
		temp -= effect;
		player->setMagicPower(temp);
	}

};
#endif
