

#include <iostream>
using namespace std;

class Base {
public:
    double x;
    explicit Base(int x){
        this->x = (double) x;
    }
    explicit Base(double x){
        this->x = x;
    }
};

class Derived : public Base{
public:
    using Base::Base;
};

int main(){
    Derived derived1(4);
    cout << derived1.x << endl;
    Derived derived2(4.6);
    cout << derived2.x << endl;

    return 0;
};
