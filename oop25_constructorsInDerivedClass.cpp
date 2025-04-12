#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 constructor is called..."<<endl;
        }
        void printData1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 constructor is called..."<<endl;
        }
        void printData2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived:public Base1,public Base2{
    int derived1,derived2;
    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called..."<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }
};
int main(){
    Derived d(1,2,3,4);
    d.printData1();
    d.printData2();
    d.printDataDerived();

    return 0;
}