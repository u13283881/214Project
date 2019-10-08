//
// Created by aaron on 2019/10/08.
//

#ifndef INC_214PROJECT_ENGINE_H
#define INC_214PROJECT_ENGINE_H


#include "AbstractPart.h"

class Engine : public AbstractPart {
protected:
    int thrust;
    int powerConsumption;
    int hp;
    int maxHp;
    bool status;
public:
    Engine();

    bool isOperational();

    int getThrust() const;

    int getPowerConsumption() const;

    int getHp() const;

    bool isStatus() const;

    void repair(int x);

    void hit(int x);

    ~Engine();
};


#endif //INC_214PROJECT_ENGINE_H