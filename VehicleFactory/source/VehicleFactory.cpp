

#include <iostream>
using namespace std;

enum VehicleType {
    VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};

// library
class Vehicle{
public:
    virtual void printVehicle() = 0;
    static Vehicle* Create(VehicleType type);
};

class TwoWheeler: public Vehicle{
public:
    void printVehicle(){
        cout << "I'm a two wheeler" << endl;
    }
};

class ThreeWheeler: public Vehicle{
public:
    void printVehicle(){
        cout << "I'm a three wheeler" << endl;
    }
};

class FourWheeler: public Vehicle{
public:
    void printVehicle(){
        cout << "I'm a four wheeler" << endl;
    }
};

// factory method
Vehicle* Vehicle::Create(VehicleType type) {
    if (type == VT_TwoWheeler){
        return new TwoWheeler();}
    else if (type == VT_ThreeWheeler){
        return new ThreeWheeler;
    } else if (type == VT_FourWheeler){
        return new FourWheeler;
    } else{
        return NULL;
    }
}

class Client {
public:
    Client() {
        VehicleType three_wheels = VT_ThreeWheeler;
        pVehicle = Vehicle::Create(three_wheels);
    };
    ~Client(){
        if (pVehicle){
            delete[] pVehicle;
            pVehicle = NULL;
        }
    }
    Vehicle* getVehicle(){
        return pVehicle;
    }

private:
    Vehicle *pVehicle;
};


int main(){

    Client pClient;// = new Client();
    Vehicle *pVehicle = pClient.getVehicle();
    pVehicle->printVehicle();
    return 0;
};
