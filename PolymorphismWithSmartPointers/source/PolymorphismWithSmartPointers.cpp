
/*
 * Stackoverflow question here:
 * https://stackoverflow.com/questions/59615767/why-does-this-call-to-getnoise-use-the-base-class-implementation-and-not-the-s?noredirect=1#comment105395207_59615767
 *
 */

#include <iostream>
#include <vector>
#include <memory>

using namespace std;


class Animal {

protected:
    std::string noise = "None";
public:
    Animal() = default;

    virtual ~Animal() = default;

    virtual std::string getNoise() {
        return noise;
    }

};

class Duck : public Animal {
public:
    Duck() {
        noise = "Quack!";
    }
};

/*
 * 1) subclasses do not need another implementation of getNoise
 * 2) make noise protected in base class
 */

class Dog : public Animal {
public:
    Dog() {
        noise = "Bark!";
    }
};

typedef std::shared_ptr<Animal> AnimalsPtr;


class AnimalsContainer {
public:
    std::vector<AnimalsPtr> animals;
    AnimalsPtr front;
    Duck duck;
    Dog dog;

    AnimalsContainer() {
        animals.push_back(std::make_unique<Animal>(duck));
        animals.push_back(std::make_unique<Animal>(dog));
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

    Zoo zoo;
    cout << zoo.animalsContainer.front->getNoise() << endl;

    return 0;
};

