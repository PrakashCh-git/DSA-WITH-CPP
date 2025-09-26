#include<iostream>
using namespace std;
class Vehicle{
public:
    string fuel;
    int seat;
    string type;
};
class Car : public Vehicle{
public:
    int topspeed;
    float mileage;
};

int main(){
    Car Audi;
    Audi.fuel = "Kerosine";
    Audi.seat = 4;
    Audi.type = "Maldhowa";



    //Inheritence is the property of a class to inherit the class member of other class known as parent class.
    return 0;
}