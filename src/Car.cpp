#include "Car.h"

Car::Car()
{
    brand = "Lamborghini";
    color = "orange";
    model = "Centenario";
}

Car::~Car()
{
    //dtor
}

string Car :: show(){
    return model;
}

void Car::setColor(string c){color = c;}
void Car::setModel(string m){model = m;}
void Car::setBrand(string b){brand = b;}
