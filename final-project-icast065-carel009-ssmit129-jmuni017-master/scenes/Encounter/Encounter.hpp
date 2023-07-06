//
// Created by Isaac Castro on 2/22/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_ENCOUNTER_H
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_ENCOUNTER_H

#include "../Scene.hpp"
#include <iostream>
using namespace std;

class Encounter: public Scene {
    public:
    Encounter() : Scene() {
    };
   virtual void SetUpScene() = 0;
};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_ENCOUNTER_H
