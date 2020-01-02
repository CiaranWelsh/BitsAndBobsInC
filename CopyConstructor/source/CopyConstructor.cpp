/*
 * EventA copy constructor is a member function which initialised an object using another object of the same class.
 * EventA copy constructor has the general form:
 *      - ClassName(const ClassName &old_obj);
 *
 * EventA copy constructor is called when a new object is created from an existing one
 * The assignment operator on the other hand is called when already initialised objects are assigned new values
 * from another existing object.
 *
 * In the following statements, one we are assigning and the other we are using the copy constructor. which is which?
 *
 *  MyClass t1, t2;
 *  MyClass t3 = t1; // --> 1
 *  t2 = t1     // --> 2
 *
 * In 1), we are creating a new MyClass using the values in t1, whereas in 2) we are only assigning the value of
 * t2 to t1.
 *
 */

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    // this is the default constructor
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }

    // This is the copy constructor.
    Point(const Point &p){
        x = p.x;
        y = p.y;
    }
    int getX(){return x;};
    int getY(){return y;};
};


class String
{
private:
    char *s;
    int size;
public:
    String(const char *str = NULL);
    ~String(){delete []s;};
    String(const String&);
    void print(){cout << s << endl;};
    void change(const char*);
};

String::String(const char *str) {
    size = strlen(str);
    s = new  char[size+1];
    strcpy(s, str);
}

void String::change(const char *) {
    delete[] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}



int main(){
    // Here we use the default constructor
    Point p(4, 6);

    // here we use the copy constructor.
    Point p2 = p;




    return 0;
};
