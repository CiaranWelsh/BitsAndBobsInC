

#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int s);
    double& operator[](int i) {
        // We check to see whether i is in range 0 < i < sz
        if (i < 0 || size() <= i)
            throw out_of_range("Vector::operator[]");
        return elem[i];
    }
    int size(){
        return sz;
    }


private:
    double* elem;
    int sz;
};

Vector::Vector(int s) {
    if (s < 0)
        throw length_error("");
    elem = new double[s];
    sz = s;
}


int main(){
    Vector v(6);

    for (int i=0; i < v.size(); i++){
        v[i] = i;
    }

    double sum = 0;
    for (int i=0; i<v.size(); i++){
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
};
