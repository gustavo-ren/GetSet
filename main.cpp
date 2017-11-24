#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Car car;

    string m = car.show();

    cout << m << endl;

    car.setModel("Aventator");

    m = car.show();

    cout << m << endl;
}
