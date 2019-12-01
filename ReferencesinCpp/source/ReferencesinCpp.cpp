/*
 * When a variable is declared as a reference, it becomes an alternative name for an existing variable. References
 * are declared by using the '&' in the declaration.
 */

#include <iostream>
using namespace std;

int main(){
    int x = 10;

    // ref is a reference to x
    int& ref = x;

    // both print out 10
    cout <<x<<endl;
    cout << ref << endl;

    ref = 20;

    // now we have changed the value of 'x' to 20, using the 'ref' interface to x.

    // both print out 20
    cout << x << endl;
    cout << ref << endl;

    x = 30;

    // the value of x is now 30. Since ref also points to x, it also changes. They are linked. Two alternative names
    // for the same variable.

    // both print out 30
    cout << x << endl;
    cout << ref << endl;



    return 0;
};
