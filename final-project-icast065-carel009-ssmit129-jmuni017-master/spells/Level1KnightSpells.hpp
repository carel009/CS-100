//
// Created by Isaac Castro on 3/13/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1KNIGHTSPELLS_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1KNIGHTSPELLS_HPP

#include "PlayerSpells.hpp"
#include "Spells.hpp"
#include "KnightSpells.hpp"
#include "../character.hpp"
#include <string>

class Level1KnightSpells : public  KnightSpells{
private:
    string spellName = "Gale";
    string type = "Attack";
    string description = "Slash through your foe";
    int effect = 30;
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


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_LEVEL1KNIGHTSPELLS_HPP
