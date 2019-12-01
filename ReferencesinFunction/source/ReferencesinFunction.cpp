/*
 * One application of a reference is to modify the passed parameters in a function.
 *
 * If a function receives a reference to a variable, it can modify the value of the variable.
 */

/*
 * 'temp' is a reference to the first int, a in this case which has a value of 3 (see main). The &first argument
 * is a *reference* to a, which has a value of 3. We assing a temporary variable temp to first, making it a copy
 * of a reference to a, which has a value of 3. We then assign the first variable to the value of b, via the
 * &second reference to b (value of 5). Now first and second both have a value of b, which is 5. We then assign the
 * remembered value of 3 to the second variable, via the copied reference in temp.
 */
void swap(int &first, int& second){
    int temp = first;
    first = second;
    second = temp;
}

#include <iostream>
using namespace std;

int main(){

    int a = 3, b = 5;

    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    /*
     *
     */

    return 0;
};
