/*
 * I asked a question about this code on stack overflow:
 * https://stackoverflow.com/questions/59605034/how-can-i-achieve-polymorphism-in-this-simple-minimal-example/59605133#59605124
 */

#include <iostream>

using namespace std;


struct Flags {
public:
    bool withCheese = false;
    bool withBiscuits = false;

};

class Event {
    std::string description = "The base class";
    std::string id = "Base";
public:

    Event() = default;

    virtual ~Event() = default; // must must must be virtual

    Event(Event const &event) = default;

    Event &operator=(Event &&) = default;

    virtual void go(Flags &flags) {};

    virtual void printDescription() {
        std::cout << description << std::endl;
    }

    virtual std::string getId() {
        return id;
    }
};


class EatCheese : public Event {
    std::string description = "We eat cheese now";
    std::string id = "EatCheese";
public:
    using Event::Event;

    void go(Flags &flags) override {
        flags.withCheese = true;
        flags.withBiscuits = false;
    };


    std::string getId() override {
        return id;
    }
};

class EatBiscuits : public Event {
    std::string description = "We eat biscuits now";
    std::string id = "EatBiscuits";
public:
    using Event::Event;

    void go(Flags &flags) override {
        flags.withCheese = false;
        flags.withBiscuits = true;
    };

    std::string getId() override {
        return id;
    }
};


class Runner {
public:
    EatCheese eventA;
    EatBiscuits eventB;
    Event *current_event = &eventA; // The problematic line: this still points to Base, not eventA.

    Flags flags;

    Event *step() {
        cout << "description: ";
        current_event->printDescription();
        current_event->go(flags);


        if (current_event->getId() == "EatCheese") {
            current_event = &eventB;
        } else if (current_event->getId() == "EatBiscuits") {
            current_event = &eventA;
        }
        cout << endl;

        return current_event;
    }

};


int main() {
    Runner runner;
    cout << "current_event_id: " << runner.current_event->getId() << ", with biscuits: " << runner.flags.withBiscuits
         << ", with Cheese: " << runner.flags.withCheese << endl;
    runner.step();
    cout << "current_event_id: " << runner.current_event->getId() << ", with biscuits: " << runner.flags.withBiscuits
         << ", with Cheese: " << runner.flags.withCheese << endl;
    runner.step();
    cout << "current_event_id: " << runner.current_event->getId() << ", with biscuits: " << runner.flags.withBiscuits
         << ", with Cheese: " << runner.flags.withCheese << endl;
    return 0;
};
