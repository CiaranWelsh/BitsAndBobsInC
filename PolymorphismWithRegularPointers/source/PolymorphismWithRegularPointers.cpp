

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

class RedTailDuck : public Duck {
public:
    RedTailDuck() {
        noise = "Red Quack!";
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

class BlueTailDog : public Dog {
public:
    BlueTailDog() {
        noise = "Blue Bark!";
    }
};

typedef std::shared_ptr<Animal> AnimalsPtr;


class AnimalsContainer {
public:
    std::vector<Animal*> animals;
    Animal* front;

    AnimalsContainer() {
        auto* duck = new Duck();
        auto* redTailDuck = new RedTailDuck();
        auto* dog = new Dog();
        auto* blueDog = new BlueTailDog();
        animals.push_back(duck);
        animals.push_back(dog);
        animals.push_back(redTailDuck);
        animals.push_back(blueDog);
        front = animals[0];
    }

    ~AnimalsContainer() {
        for (Animal* a: animals)
            delete a;
        animals.clear();
    };

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
    cout << zoo.animalsContainer.animals[3]->getNoise() << endl;
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
