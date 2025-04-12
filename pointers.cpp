#include<iostream>
using namespace std;

int main(){
    //Pointer---->>>pointer is a data type/variable which holds the address of another variables.
    int a=45;       //  & --->(AddressOf) operator--
    int *b=&a;      //  * --->(Value Of)Dereference operator--
    cout<<"The address of a is:"<<b<<endl;
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The value at address b is:"<<*b<<endl;

    //Pointer to pointer concept---
    int **c=&b;
    cout<<"The address of b is:"<<c<<endl;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The value at address c is:"<<*c<<endl;
    cout<<"The value at address of value_at(value_at(c)) is:"<<**c<<endl;
    return 0;
}