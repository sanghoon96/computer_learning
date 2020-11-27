// Need Demonstration of Debug

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;

double division(int a, int b)
{
    int result = 0;
    try
    { //
        if (b == 0)
        {
            throw "Division by zero condition!";
        }
        result = a / b; // Error Floating point exception When Delete above line : throw 라인을 주석처리하거나 없애면 에러가 난다
    }
    catch (const char *msg)
    { // exception of type const char*
        cout << "Exception caught : " << msg << endl;
    }
    catch (std::exception msg)
    {
        cout << "caught in main() :" << msg.what() << endl;
    }
    return result;
}
int main()
{
    int first = 50;
    int second = 0;
    try
    {
        double third = division(first, second);
        cout << "Exception caught in try : " << third << endl;
        return -1;
    }
    catch (std::exception msg)
    {
        cout << "Exception caught in main()" << msg.what() << endl;
        return -1;
    }
    return 0;
}