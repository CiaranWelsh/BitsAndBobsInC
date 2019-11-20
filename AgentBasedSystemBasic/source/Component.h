//
// Created by ncw135 on 20/11/2019.
//

#ifndef BITSANDBOBSINC_COMPONENT_H
#define BITSANDBOBSINC_COMPONENT_H


#include <boost/core/swap.hpp>
#include "Position.h"

class Component {
private:
public:
    Position &pos;
    int id;
    Component(Position& pos, int id) : pos(pos), id(id){}


    Component& operator=(Component c){

        std::swap(pos, c.pos);
        std::swap(id, c.id);
        return *this;
    }
};


#endif //BITSANDBOBSINC_COMPONENT_H
