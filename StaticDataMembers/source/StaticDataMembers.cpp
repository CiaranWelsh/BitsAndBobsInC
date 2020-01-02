

#include <iostream>

using namespace std;


class EventA {
public:
    EventA() {
        cout << "Constructor for EventA has been called" << endl;
    }
};


class EventB {
    static EventA a;
public:
    EventB() {
        cout << "Constructor for EventB has been called" << endl;
    }
};

int main() {

    /*
     * Note: no "()" after EventB. Why not?
     *
     * The output of this program is  "Constructor for EventB has been called". The reason the constructor for EventA
     * was not called is because static members are only declared in the class declaration. They are not defined.
     * Static members must be explicetly defined outside the class declaration using a scope resolution operator.
     *
     * If we try to access static member 'a' without explicit definition of it we will get a complication error.
     *
     * Static members are shared among all objects which is why they are also called class members or field members.
     * Static members can be accessed without objects
     */
    EventB b;

    return 0;
};
