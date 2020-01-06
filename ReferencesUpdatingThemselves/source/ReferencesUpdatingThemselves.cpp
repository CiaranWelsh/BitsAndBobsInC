

#include <iostream>
#include <vector>
#include <memory>

using namespace std;


class Animals {

protected:
    std::string noise = "None";
public:
    Animals() = default;

    virtual ~Animals() = default;

    virtual std::string getNoise() {
        return noise;
    }

};

class Duck : public Animals {
public:
    Duck() {
        noise = "Quack!";
    }
};

/*
 * 1) subclasses do not need another implementation of getNoise
 * 2) make noise protected in base class
 */

class Dog : public Animals {
public:
    Dog() {
        noise = "Bark!";
    }
};

typedef std::shared_ptr<Animals> AnimalsPtr;


class AnimalsContainer {
public:
    std::vector<Animals *> animals;
    Animals *front;
    Duck duck;
    Dog dog;

    AnimalsContainer() {
        animals.push_back(&duck);
        animals.push_back(&dog);
        front = animals[0];
    }

    ~AnimalsContainer() = default;
};

class Zoo {
public:
    AnimalsContainer animalsContainer;

    Zoo() = default;

    ~Zoo() = default;
};

int main() {
//    AnimalsContainer animals;
//    cout << animals.front->getNoise() << endl;

    Zoo zoo;
    cout << zoo.animalsContainer.front->getNoise() << endl;
//    Zoo zoo;

//    cout << zoo.animalsContainer.animals.size() << endl;
//    cout << zoo.animalsContainer.front->getNoise() << endl;
//    cout << "object.o.important_attribute: " << object.o.important_attribute << endl;
//    cout << "object.importand_attribute: " << object.important_attribute << endl;
//    object.o.important_attribute = 10;
//    cout << "object.o.important_attribute: " << object.o.important_attribute << endl;
//    cout << "object.importand_attribute: " << object.important_attribute << endl;

    return 0;
};
