#include <iostream>
using namespace std;
// Constructor overloading
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(2, 3);
    c1.printNumber();

    Complex c2(6);
    c2.printNumber();

    Complex c3; // default constructor
    c3.printNumber();
    return 0;
}