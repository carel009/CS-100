#ifndef _PHYSICAL_DEFENSE_POTION_H_
#define _PHYSICAL_DEFENSE_POTION_H_
#include "consumables.h"
#include "character.hpp"
#include "player.hpp"
#include <string>
#include <vector>

using namespace std;
//category 4
class physicalDefensePotion : public consumables {

private:

	string name;
	int category;
	int effect;

public:

	physicalDefensePotion(string name, int category, int effect) : consumables() {
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
