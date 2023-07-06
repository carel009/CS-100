//
// Created by Isaac Castro on 3/10/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_SPELLMANAGER_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_SPELLMANAGER_HPP

#include "Spells.hpp"
#include <iostream>
#include <vector>
using namespace std;
class SpellManager {

    vector<Spells*> characterSpells;

public:
    int getNumOfSpells() {
        return characterSpells.size();
    }
    void addSpell(Spells* newSpell) {
        characterSpells.push_back(newSpell);
    }

    void printSpells() {
        int numOfSpells = 1;
        for(int i = 0; i < characterSpells.size(); i++) {
            cout << numOfSpells << ". " << characterSpells.at(i)->getSpellName() << endl;
            ++numOfSpells;
        }
    }

    Spells* chooseSpell(int i) {
        return characterSpells.at(i-1);
    }
};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_SPELLMANAGER_HPP
