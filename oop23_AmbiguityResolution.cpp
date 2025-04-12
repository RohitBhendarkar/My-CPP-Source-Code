#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Hii Brother" << endl;
        cout << "How are you? (English)" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Hello Bhai" << endl;
        cout << "Kaise Ho? (Hindi)" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        // Base1::greet();
        Base2::greet();
    }
};

class B
{
    int d;

public:
    void say()
    {
        cout << "Hello friends" << endl;
    }
};
class D : public B
{
    int c;
    // D's say() method will overrride base class B's say() method.
public:
    void say()
    {
        cout << "Hello Ramesh!!! How are you?" << endl;
    }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    // Ambiguity Case 1:
    //  obj1.greet();
    //  obj2.greet();
    Derived d;
    d.greet();

    // Ambiguity Case 2:

    // B b;
    // b.say();
    D d1;
    d1.say();
    return 0;
}