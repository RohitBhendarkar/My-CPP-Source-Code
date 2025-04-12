#include <iostream>
#include <cmath>
using namespace std;

/* Exercise:

1.Create 2 classes:1)SimpleCalculator---Take 2 inputs using a utility function and perform +,-,*,/ and display
                                        results using another function.
                 2)ScientificCalculator---Take 2 inputs using a utility function and perform any scientific
                                     operations and display the results using another function
2.Create another class HybridCalculatorand inheritit using these 2 classes.
Q1.What type of inheritance are you using?--->Multiple Inheritance
Q2.Which mode of inheritance are you using?--->Public Mode
Q3.How is code reusability implemented?---->By inheriting Both classes(SimpleCalculator and
                                            ScientificCalculator) or Inheritance

*/

class SimpleCalculator
{
    int a;
    int b;

public:
    void set1Values(int, int);
    void get1Values(void);
    void display_Simple_Result(void);
};
void SimpleCalculator::set1Values(int x, int y)
{
    a = x;
    b = y;
}
void SimpleCalculator::get1Values()
{
    cout << "The value of a is " << a << " and b is " << b << endl;
}
void SimpleCalculator::display_Simple_Result()
{
    cout << "The Addition of a and b is " << a + b << endl;
    cout << "The Subtraction of a and b is " << a - b << endl;
    cout << "The Multiplication of a and b is " << a * b << endl;
    cout << "The Division of a and b is " << a / b << endl;
}

class ScientificCalculator
{
    int a;
    int b;

public:
    void set2Values(int, int);
    void get2Values(void);
    void display_scientific_Result();
};
void ScientificCalculator::set2Values(int x, int y)
{
    a = x;
    b = y;
}
void ScientificCalculator::get2Values()
{
    cout << "The value of a is " << a << " and b is " << b << endl;
}
void ScientificCalculator::display_scientific_Result()
{
    cout << "The value of square root of a is " << sqrt(a) << endl;
    cout << "The Exponential value of a is " << exp(a) << endl;
    cout << "The Sine value of b is " << sin(b) << endl;
    cout << "The Cosine value of a is " << cos(a) << endl;
    cout << "The tangential value of b is " << tan(b) << endl;
}
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void displayResults()
    {
        cout << "For Simple Calculator:" << endl;
        get1Values();
        cout << endl;
        display_Simple_Result();
        cout << endl
             << endl;
        cout << "For Scientific Calculator:" << endl;
        get2Values();
        cout << endl;
        display_scientific_Result();
    }
};
int main()
{
    HybridCalculator hc1;
    //    hc1.display_Simple_Result();
    //    hc1.display_scientific_Result();
    hc1.set1Values(10, 5);
    hc1.set2Values(3, 7);
    hc1.displayResults();

    return 0;
}