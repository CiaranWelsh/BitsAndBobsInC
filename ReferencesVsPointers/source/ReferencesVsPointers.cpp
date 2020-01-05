/*
 * Both references and pointers can be used to change the value of a local variable.
 * They can also both be used to prevent the need for copying large amounts of data, therefore improving efficiency.
 *
 * They differ in some ways.
 */

#include <iostream>
using namespace std;

int main(){
    /*
     * EatCheese pointer can be declared as as void, yet a reference cannot.
     *
     * What is the point of declaring a void pointer?
     */

    int a = 10;
    void *aa = &a;

    cout << a<< endl;
    cout << aa<< endl;

//    void &r = a; // This is an error: cannot form a reference to void.

    return 0;
};
