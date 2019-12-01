

#include <iostream>

using namespace std;


class A {
public:
    A() {
        cout << "Constructor for A has been called" << endl;
    }
};


class B {
    static A a;
public:
    B() {
        cout << "Constructor for B has been called" << endl;
    }
};

int main() {

    /*
     * Note: no "()" after B. Why not?
     *
     * The output of this program is  "Constructor for B has been called". The reason the constructor for A
     * was not called is because static members are only declared in the class declaration. They are not defined.
     * Static members must be explicetly defined outside the class declaration using a scope resolution operator.
     *
     * If we try to access static member 'a' without explicit definition of it we will get a complication error.
     *
     * Static members are shared among all objects which is why they are also called class members or field members.
     * Static members can be accessed without objects
     */
    B b;

    return 0;
};
