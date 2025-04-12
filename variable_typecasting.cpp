#include<iostream>
using namespace std;

    int c=45;
int main()
{   
    /*************** Built in data types ***************/
    int a,b,c;
     cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;

    c=a+b;
    cout<<"The value of c is:"<<c<<endl;
    cout<<"The value of global c variable is:"<<::c<<endl;// :: -->This is scope resolution operator,it specifies the value of global variable.
    
    
    /*************** float,double and long double literals ***************/
    float d=56.6f;      //always specify f at the end of value of float variable.
    double e=34.4798;
    long double f=234.3567l;        //always specify l at the end of value of long double variable. 
    cout<<"value of float d:"<<d<<endl;
    cout<<"value of double e:"<<e<<endl;
    cout<<"value of long double:"<<e<<endl;
    cout<<endl;

    cout<<"Obtaining the size of variables-->"<<endl;
/******* sizeof() property is used to get the size of variables *******/
    cout<<"Size of 56.6 is:"<<sizeof(56.6)<<endl;   
    cout<<"Size of 56.6f is:"<<sizeof(56.6f)<<endl;
    cout<<"Size of 56.6F is:"<<sizeof(56.6F)<<endl;
    cout<<"Size of 34.4798 is:"<<sizeof(34.4798)<<endl;
    cout<<"Size of 234.3567l is:"<<sizeof(234.3567l)<<endl;
    cout<<"Size of 234.3567L is:"<<sizeof(234.3567L)<<endl;
    cout<<endl;

/******* Reference Variables *******/
    float x=786;
    float &y=x;
    cout<<"The value of x is:"<<x<<endl;
    cout<<"The value of y is:"<<y<<endl;

/******* Typecasting of variables *******/
    int a=45;
    float b=45.67f;
    cout<<"The value of float a is:"<<(float)a<<endl;
    cout<<"The value of float a is:"<<float(a)<<endl;

    cout<<"The value of int b is:"<<(int)b<<endl;
    cout<<"The value of int b is:"<<int(b)<<endl;

    cout<<"The value [a+b] of is:"<<a+b<<endl;
    cout<<"The value of [a+(int)b] is:"<<a+(int)b<<endl;
    cout<<"The value of [a+int(b)] is:"<<a+int(b)<<endl;

    return 0;
}
