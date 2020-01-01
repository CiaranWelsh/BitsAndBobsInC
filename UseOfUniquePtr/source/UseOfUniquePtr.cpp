

#include <iostream>
#include <memory>
using namespace std;

void taker(unique_ptr<double[]>);

void uniqueness(){
    // p is created and owns a section of memory big enough for 42 doubles
    unique_ptr<double[]> p = make_unique<double[]>(42);

    // You cannot copy a unique_ptr
    // unique_ptr<double> q = p;    // error

    // Because you cannot copy a unique_ptr, you also can't pass a unique_ptr to a function by coping its value:
    // taker(p); // error
}
void borrower1(double*);

void borrower2(unique_ptr<double[]>*);

void borrower3(unique_ptr<double[]>&);


void uniqueness2(){
    // p is created and owns a section of memory big enough for 42 doubles
    unique_ptr<double[]> p = make_unique<double[]>(42);

    // you can lend ownership of some memory to another function without
    // relinquishing ownership.
    borrower1(p.get());
    borrower2(&p);
    borrower3(p);

    // or you can give ownership to another function or variabble using move:
}

void taker2(unique_ptr<double[]>);

void uniqueness3(){
    unique_ptr<double[]> p = make_unique<double[]>(42);

    // you can move p to q, not copy.
    unique_ptr<double[]> q = move(p);

    // or to the function argument
    taker2(move(p));

}

int main(){
    cout << "hello world" << endl;
    uniqueness();
    return 0;
};
