#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    void setWidth(double param_width) { width = param_width; }
    double getWidth(void);
    void setLength(double length) { this->length = length; };

private:
    double width;
};
double Box::getWidth(void) { return width; } // Scope resolution operator (::)
int main()
{
    Box BoxSecond; // Declare BoxSecond of type Box
    BoxSecond.setWidth(10.0);
    BoxSecond.length = 12.0;
    // volume = BoxSecond.width * BoxSecond.length; // Error
    double volume = BoxSecond.getWidth() * BoxSecond.length;
    cout << "Volume of BoxSecond : " << volume << endl;
    // Volume of BoxSecond : 2.65133e-313
    return 0;
}