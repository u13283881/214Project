//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_CAPTAIN_H
#define INC_214PROJECT_CAPTAIN_H


#include "Crew.h"
#include "Spacecraft.h"

class Captain : public Crew {
protected:
    Spacecraft * myShip;

public:
    void executeOrder(string s);
};


#endif //INC_214PROJECT_CAPTAIN_H