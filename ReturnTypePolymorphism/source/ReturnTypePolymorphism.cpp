

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
        cout << "I'm subclass A" << endl;
    }

    std::string myMethod() override {
        return "A";
    }
};

class SubClassB : public SuperClass {
public:
    SubClassB() : SuperClass() {
        cout << "I'm subclass B" << endl;
    }

    std::string myMethod() override {
        return "B";
    }
};


class Client {
private:
    std::string which;

    std::unique_ptr<SuperClass> letterFactory(){
        if (which == "A") {
            return std::make_unique<SubClassA>();
        } else if (which == "B") {
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
    std::string which = "B";
    Client client(which);
    return 0;
};
