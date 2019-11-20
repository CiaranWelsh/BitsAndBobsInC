

#include <iostream>

using namespace std;

enum class Colour {
    red, blue, green
};
enum class TrafficLight {
    green, yellow, red
};


TrafficLight &operator++(TrafficLight &t) {
    switch (t) {
        case TrafficLight::green:
            return t = TrafficLight::yellow;
        case TrafficLight::yellow:
            return t = TrafficLight::red;
        case TrafficLight::red:
            return t = TrafficLight::green;
    }
}

int main() {

    Colour col = Colour::red;
    TrafficLight light = TrafficLight::red;

    TrafficLight next = ++light;


    return 0;
};
