//
// Created by Isaac Castro on 3/13/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1WARRIORSPELL_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1WARRIORSPELL_HPP
#include "PlayerSpells.hpp"
#include "Spells.hpp"
#include "WarriorSpells.hpp"
#include "../character.hpp"
#include <string>

class Level1WarriorSpell : public WarriorSpells{
private:
    string spellName = "Throw Axes";
    string type = "Attack";
    string description = "Throw multiple axes doing twice the damage of your basic attack";
    int effect = 40;
public:

    virtual string getSpellName() {
        return spellName;
    }
    virtual string getType() {
        return type;
    }
    virtual string getDescription() {
        return description;
    }

    virtual void castSpell(Character* target) {
        int tempHealth = target->getHealth();
        tempHealth -= effect;
        target->setHealth(tempHealth);
    }

};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1WARRIORSPELL_HPP
