

#include <iostream>
#include <complex>

using namespace std;

namespace MyCode {
    /*
     * The namespace ensures we do not conflict with another namespace, i.e. complex from the std library.
     */
    class complex ;
    complex sqrt(complex);

    int main();
}

int MyCode::main(){
    complex z{1, 2};
    auto z2 = sqrt(z);
    cout << z2.real();
    return 0;
};


int main(){
    return MyCode::main();
}