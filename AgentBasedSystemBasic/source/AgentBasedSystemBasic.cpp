

#include <iostream>
#include <vector>

using namespace std;

#include "Grid2D.h"
#include "Agent.h"
#include "Position.h"

#include "boost/numeric/ublas/matrix_sparse.hpp"
#include "boost/numeric/ublas/io.hpp"

int main() {

    Position p = Position(1, 2);
    Agent agent = Agent(p, 0);

    Grid2D grid(4, 4);
    auto x = grid(0, 0);


//    vector<Agent> elements = Agent(Position p1);




    return 0;
};
