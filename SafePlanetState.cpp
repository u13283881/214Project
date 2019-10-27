/**
 *  @file SafePlanetState.cpp
 *  @class SafePlanetState
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "SafePlanetState.h"

/**
 * @param c - planet object
 * change planet state
 */
void SafePlanetState::changeState(Planet* c){
    int safety = c->getSafetyQuotient();
    if(safety >= 2){
        c->setState(new SafePlanetState());
        //_danger = Safety::safe;
    }else if(safety == 1){
        c->setState(new ModeratePlanetState());
        //_danger = Safety::moderate;
    }else{
        c->setState(new HostilePlanetState());
        //_danger = Safety::hostile;
    }
}

string SafePlanetState::getSafetyLevel(){
    return "Safe";
}