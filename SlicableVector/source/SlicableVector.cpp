

#include <iostream>
#include <vector>
#include <valarray>

using namespace std;


class SlicableIntVector {
private:
    std::vector<int> vector;
public:
    explicit SlicableIntVector(std::vector<int> vector) : vector(vector) {};

    int &operator[](int index) {
        return vector[index];
    }

    std::vector<int> operator()(int start, int end){
        std::vector<int> sliced_vector = std::vector<int>(vector.begin()+start, vector.begin()+start + end);
        return sliced_vector;
    }


};


int main() {
    std::vector<int> x{1, 2, 3, 4};
    SlicableIntVector slicableIntVector(x);
    cout << x[2] << endl;
    return 0;
};
