

#include <iostream>
#include <vector>

using namespace std;




int main(){

    vector<int> vect {10, 20, 30, 40};

    for (int x : vect){
        cout << "before" << x << endl;
        x = x + 5;
        cout << "after" << x << endl;
    }

    return 0;
};
