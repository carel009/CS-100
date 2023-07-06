//
// Created by Isaac Castro on 3/10/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1MAGESPELL_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1MAGESPELL_HPP

#include "PlayerSpells.hpp"
#include "Spells.hpp"
#include "MageSpells.hpp"
#include "../character.hpp"
#include <string>

class Level1MageSpell : public MageSpells {
private:
    string spellName = "Chrono Cross";
    string type = "Attack";
    string description = "Summons a cross that swallows up a foe.";
    int effect = 20;
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


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1MAGESPELL_HPP
