

#include <iostream>
#include <memory>

using namespace std;

class SuperClass {
public :
    SuperClass() {
        cout << "I'm the superclass" << endl;
    };

    virtual std::string myMethod(){};
};

class SubClassA : public SuperClass {
public:
    SubClassA() : SuperClass() {
        cout << "I'm subclass EatCheese" << endl;
    }

    std::string myMethod() override {
        return "EatCheese";
    }
};

class SubClassB : public SuperClass {
public:
    SubClassB() : SuperClass() {
        cout << "I'm subclass EatBiscuits" << endl;
    }

    std::string myMethod() override {
        return "EatBiscuits";
    }
};


class Client {
private:
    std::string which;

    std::unique_ptr<SuperClass> letterFactory(){
        if (which == "EatCheese") {
            return std::make_unique<SubClassA>();
        } else if (which == "EatBiscuits") {
            return std::make_unique<SubClassB>();
        } else {
            throw std::invalid_argument("Bad");
        }
    }
public:

    explicit Client(std::string &which) : which(which) {
        letterFactory();
    };
};

int main() {
    std::string which = "EatBiscuits";
    Client client(which);
    return 0;
};
