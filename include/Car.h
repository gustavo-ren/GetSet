#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car
{
    public:
        Car();
        virtual ~Car();
        string show();
        void setModel(string m);
        void setColor(string c);
        void setBrand(string b);

    protected:

    private:
        string color;
        string model;
        string brand;
};

#endif // CAR_H
