#ifndef _EP_POTION_H_
#define _EP_POTION_H_
#include "consumables.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 2
class epPotion : public consumables {

private:

	string name;
	int category;
	int effect;

public:

	epPotion(string name, int category, int effect) : consumables() {
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

		int temp = player->getEP();
		temp += effect;
		player->setEP(temp);

	}
	virtual void undoEffect(Character* player) {

		int temp = player->getEP();
		temp -= effect;
		player->setEP(temp);
	}

};
#endif
