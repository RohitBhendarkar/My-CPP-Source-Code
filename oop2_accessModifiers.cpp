#include<iostream>
using namespace std;

class Employee{
    private:  
     int a,b,c;

    public:
     int d,e;
     void setData(int a1,int b1,int c1);   //Declaration
     void getData(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;
        cout<<"The value of e is:"<<e<<endl;
     }
};
void Employee ::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee E;
    //E.a=23;     //This will throw an error--->>>Because it is private access modifier.
    E.d=45;
    E.e=23;
    E.setData(1,2,3);
    E.getData(); 
    return 0;  
}