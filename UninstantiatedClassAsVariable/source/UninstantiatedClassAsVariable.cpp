/*
 * This misconception was solved in this StackOverflop question:
 * https://stackoverflow.com/questions/59567997/is-it-possible-to-use-a-pointer-to-an-uninstantiated-object-as-a-variable-in-c/59568182#59568182
 */

#include <iostream>
#include <memory>

using namespace std;

class Event {
public:
    virtual ~Event() = default;
    virtual void go() = 0;
};

class EatCheese : public Event {
public:
    void go() override {
        cout << "Running event A"<< endl;
    }
};

class EatBiscuits : public Event {
public:
    void go() override {
        cout << "Running event B"<< endl;
    }
};

class Situation{
private:
    Event* current_event = nullptr;
public:
    void setEvent(Event* event){
        current_event = event;
    }

    void runEvent(){
        current_event->go();
    }
};

int main() {
    Situation situation;
    EatCheese eventA;
    EatBiscuits eventB;
    situation.setEvent(&eventA);
    situation.runEvent();
    situation.setEvent(&eventB);
    situation.runEvent();

    return 0;
};
