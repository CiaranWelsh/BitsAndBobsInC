/*
 * When we pass an object to a function without a reference, that object is copied internally. If that object
 * is large, then we waste cpu and memory. References allow us to avoid this, by operating on the object itself,
 * rather than a copy. 
 */

#include <iostream>

using namespace std;

struct Student {
    string name;
    string address;
    int rollNo;
};

/*
 * This function doesn't take a reference, it takes the value of Student s and copies the data
 * to make it available in the scope of the function. Therefore, changing the Student's name field
 * inside the function should not affect the Student s name field from the global scope.
 */
void printUsingCopy(Student s) {
    s.name = "new jim";
    cout << s.name << " " << s.address << " " << s.rollNo << endl;
}

void printUsingRef(Student &s) {
    s.name = "new jim by ref";
    cout << s.name << " " << s.address << " " << s.rollNo << endl;
}

int main() {

    Student s = Student();
    s.name = "jim";
    s.address = "dfafd";
    s.rollNo = 4;

    /*
     * Original students name should be unaffected. The value is copied
     */
    cout << s.name<<endl;
    printUsingCopy(s);
    cout << s.name<<endl;

    /*
     * The original students name should also change to whatever the funciton changes it to.
     */
    cout << s.name<<endl;
    printUsingRef(s);
    cout << s.name<<endl;
//    printUsingRef(s);

    return 0;
};
