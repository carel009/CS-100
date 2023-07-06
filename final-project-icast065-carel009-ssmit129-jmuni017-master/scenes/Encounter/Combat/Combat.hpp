//
// Created by Isaac Castro on 2/22/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H

#include <vector>
#include <string>
#include "../Encounter.hpp"
#include "../../../character.hpp"
#include "../../../spells/Spells.hpp"
#include "../../../spells/SpellManager.hpp"

using namespace std;

class Combat: public Encounter {
    Combat(vector<Character *> combatParticipants, Character *currPlayer, Character *currAlly1, Character *currAlly2,
           Character *currAlly3, SpellManager *player1Spell);

    int combatState = 0;
    int foes = 0;
    int prevDefense;
    bool isGaurd = false;
    vector<Character*> turnOrder;
    SpellManager* playerSpells = new SpellManager;
    SpellManager* ally1Spells = new SpellManager;
    SpellManager* ally2Spells = new SpellManager;
    SpellManager* ally3Spells = new SpellManager;
    Spells* tempSpell;
    Character* player;
    Character* ally1;
    Character* ally2;
    Character* ally3;
    Character* foe1;
    Character* foe2;
    Character* foe3;

public:
    Combat(Character* currPlayer, SpellManager* player1Spell, int numOfFoes);
    Combat(vector<Character*> combatParticipants, Character* currPlayer, SpellManager* player1Spell);
    Combat(vector<Character*> combatParticipants, Character* currPlayer, Character* currAlly1, Character* currAlly2, Character* currAlly3, SpellManager* player1Spell, SpellManager* ally1_spell, SpellManager* ally2_spell, SpellManager* ally3_spell);
    void DetermineTurnOrder();
    int FindPartyMember();
    bool FindFoes();
    bool FindPlayer();
    void UpdateOrder();
    void CurrentCombat();
    virtual void SetUpScene() {
        DetermineTurnOrder();
        CurrentCombat();
    };


};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H
