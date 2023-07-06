#ifndef _HEALTH_POTION_H_
#define _HEALTH_POTION_H_
#include "consumables.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 1
class healthPotion : public consumables {

private:

	string name;
	int category;
	int effect;

public:

	healthPotion(string name, int category, int effect) : consumables() {
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

		int temp = player->getHealth();
		temp += effect;
		player->setHealth(temp);

	}

	virtual void undoEffect(Character* player) {

		int temp = player->getHealth();
		temp -= effect;
		player->setHealth(temp);
	}

};
#endif
