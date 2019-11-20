//
// Created by ncw135 on 20/11/2019.
//

#ifndef BITSANDBOBSINC_PATCH_H
#define BITSANDBOBSINC_PATCH_H

#include "Component.h"

class Patch : public Component{
private:
public:
    Position &pos;
    int id;
    Patch(Position& pos, int id) : pos(pos),
        id(id), Component(pos, id){};
};


#endif //BITSANDBOBSINC_PATCH_H
