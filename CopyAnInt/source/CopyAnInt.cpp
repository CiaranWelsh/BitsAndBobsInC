

#include <iostream>
#include <vector>

using namespace std;

class ID{
public:
    int id;

    ID(int id) : id(id){}
};

int main(){

    int id = 0;

    for (int i=0 ; i < 10; ++i){
        int new_id = id;
        std::cout << id << " " << new_id << std::endl;
        std::cout << &id << " " << &new_id << std::endl;
        id += 1;
    }
    return 0;
};
