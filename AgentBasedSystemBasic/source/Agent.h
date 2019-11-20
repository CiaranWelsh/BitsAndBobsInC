//
// Created by ncw135 on 20/11/2019.
//

#ifndef BITSANDBOBSINC_AGENT_H
#define BITSANDBOBSINC_AGENT_H

#include "Position.h"
#include "Component.h"

class Agent : public Component {
private:
public:
    Position &pos;
    int id;
    Agent(Position& pos, int id) : pos(pos),
                                   id(id), Component(pos, id){};
    Agent move();

};


#endif //BITSANDBOBSINC_AGENT_H
