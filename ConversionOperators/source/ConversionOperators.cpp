/*
 * Sometimes we need to convert one concrete type to another. C++ is smart in conversions.
 *
 *
 */

#include <iostream>
#include <cmath>

using namespace std;


class Complex
{
private:
    double real;
    double imag;

public:
    //Default constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){}

    // get the magnitude
    double mag()
    {
        return getMag();
    }

    /*
     * Magnitude conversion operator
     */
    operator double ()
    {
        return getMag();
    }

private:
    // class helper to get magnitude
    double getMag()
    {
        return sqrt(real*real + imag * imag);
    }
};




int main(){

    Complex com(4.0, 6.0);
    /*
     * We can pring out the magnitude by directly calling the mag method
     */
    cout << com.mag() << endl;

    /*
     * But because we have implemented the () operator to also return the mag, we can
     * also pring the mag like this:
     */
    cout << com << endl;

    return 0;
};










