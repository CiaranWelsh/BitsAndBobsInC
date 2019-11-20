//
// Created by ncw135 on 20/11/2019.
//

#ifndef BITSANDBOBSINC_GRID2D_H
#define BITSANDBOBSINC_GRID2D_H

#include <boost/numeric/ublas/vector.hpp>
#include "Agent.h"
#include "boost/variant.hpp"
#include "boost/range/irange.hpp"
#include "Patch.h"

class Grid2D {
private:
    int X_, Y_;
    int last_used_id_ = 0;
    std::vector<std::vector<Component>> grid;

public:
    Grid2D(int X, int Y) : X_(X), Y_(Y){
        // init our vector of vectors
        for (int i=0; i < X ; ++i){
            for (int j=0; j < Y; ++j){
                Position pos = Position(i, j);
                Patch p = Patch(pos, last_used_id_);
                std::cout << p.id << " " << &p.id << std::endl;
//                grid[i][j] = p;
                last_used_id_++;
            }
        }
//        grid[0][0] = 0;


    }

    auto operator()(int i, int j){
        if (i < 0 || i > X_)
            throw std::out_of_range("Index out of bounds");
        if (j < 0 || j > Y_)
            throw std::out_of_range("Index out of bounds");
        return grid[i, j];
    }



};


#endif //BITSANDBOBSINC_GRID2D_H
