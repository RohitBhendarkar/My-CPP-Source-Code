#include<iostream>
using namespace std;
//Parameterized constructor example 1
// class Complex{
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber(){
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }

//Parameterized constructors example 2
class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }

};

int main(){
    //example 1
    // // Implicit call
    // Complex a(4, 6);
    // a.printNumber();

    // // Explicit call
    // Complex b = Complex(5, 7);
    // b.printNumber();
        //Example 2

        Point p(7, 0);
        p.displayPoint();

        Point q(1, 8);
        q.displayPoint();

    return 0;
}
