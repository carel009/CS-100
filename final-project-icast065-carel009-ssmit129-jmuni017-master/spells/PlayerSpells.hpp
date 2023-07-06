//
// Created by Isaac Castro on 3/10/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_PLAYERSPELLS_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_PLAYERSPELLS_HPP

#include <string>
#include "Spells.hpp"
using  namespace std;
class PlayerSpells  : public Spells{
    private:
    string spellName;
    string type;
    string description;
    int effect;
    public:
    virtual string getSpellName() = 0;
    virtual string getType() = 0;
    virtual string getDescription() = 0;
    virtual void castSpell(Character* target) = 0;

};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_PLAYERSPELLS_HPP
