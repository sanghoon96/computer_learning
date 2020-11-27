#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;

class Box
{
public:
    Box(double length = 2.1, double breadth = 3.1, double height = 4.1)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    };
    double getVolume() { return length * breadth * height; };

private:
    double length;
    double breadth;
    double height;
};
int main(void)
{
    Box Box1(2.2, 3.2);
    Box Box2(8.5, 6.3, 2.0);
    Box *ptrBox; // Declare pointer to a class.
    ptrBox = &Box1;
    cout << "getVolume of Box1: " << ptrBox->getVolume() << endl;
    // getVolume of Box1: 28.864
    ptrBox = &Box2;
    cout << "getVolume of Box2: " << ptrBox->getVolume() << endl;
    // getVolume of Box2: 107.1
    return 0;
}