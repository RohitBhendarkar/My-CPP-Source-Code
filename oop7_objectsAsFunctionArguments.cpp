#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 5);
    c1.printNumber();

    c2.setData(4, 2);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}