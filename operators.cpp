#include<iostream>
using namespace std;
int main()
{
    int a=6,b=8;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    cout<<endl;
//Arithmetic operators
cout<<"Following are the Arithmetic operators:"<<endl;
    cout<<"Value of a+b is:"<<a+b<<endl;
    cout<<"Value of a-b is:"<<a-b<<endl;
    cout<<"Value of a*b is:"<<a*b<<endl;
    cout<<"Value of a/b is:"<<a/b<<endl;
    cout<<"Value of a%b is:"<<a%b<<endl;
    cout<<"Value of a++ is:"<<a++<<endl;
    cout<<"Value of a-- is:"<<a--<<endl;
    cout<<"Value of ++b is:"<<++b<<endl;
    cout<<"Value of --b is:"<<--b<<endl;
    cout<<endl;
//Assignment operators-->Used to assign values to variables.
    int d=4; float e=0.9; char c='a';

//Comparison operators
cout<<"Following are the comparison operators:"<<endl;
    cout<<"The value of a==b:"<<(a==b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a>b:"<<(a>b)<<endl;
    cout<<"The value of a<b:"<<(a<b)<<endl;
    cout<<endl;

//Logical operators
cout<<"Following are the comparison operators:"<<endl;
    cout<<"The value of logical AND operator ((a==b) && (a<b)):"<< ((a==b)&&(a<b)) <<endl;
    cout<<"The value of logical OR operator ((a==b) || (a<b)):"<< ((a==b)||(a<b)) <<endl;
    cout<<"The value of logical AND operator ((a==b) & (a<b)):"<< ((a==b) & (a<b)) <<endl;
    cout<<"The value of logical OR operator ((a==b) | (a<b)):"<< ((a==b) | (a<b)) <<endl;
    cout<<"The value of logical NOT (!(a==b)):"<<(!(a==b))<<endl;
    cout<<endl;

//Bitwise operators
    
    return 0;
}

