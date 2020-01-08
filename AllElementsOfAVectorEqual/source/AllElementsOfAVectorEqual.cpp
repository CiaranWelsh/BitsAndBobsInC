

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
bool checkEqual(std::vector<T> vec){
    bool equal = false;
    if (std::adjacent_find(vec.begin(), vec.end(), std::not_equal_to<>()) == vec.end()) {
        equal = true;
    }
    return equal;
}

int main() {
    std::vector<int> v1 = {5, 6, 7, 8};
    cout << "v1: " << checkEqual<int>(v1) << endl;
    std::vector<int> v2 = {5, 5, 5, 5};
    cout << "v2: " << checkEqual<int>(v2) << endl;
    return 0;
};
