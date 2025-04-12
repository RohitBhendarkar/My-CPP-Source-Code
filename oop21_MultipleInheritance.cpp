#include<iostream>
using namespace std;
/*Syntax for multiple inheritance:

    class Derived : visibility_mode Base1 , visibility_mode Base2{
        class body ofderivwd class
    }

*/


class Base1{
    protected:
        int baseInt1;
    public:
        void set_baseInt1(int a){
            baseInt1=a;
        }
};
class Base2{
    protected:
        int baseInt2;
    public:
        void set_baseInt2(int a){
            baseInt2=a;
        }
};

class Derived:public Base1,public Base2{
    public:
        void show(){
            cout<<"The value of BaseInt1 is:"<<baseInt1<<endl;
            cout<<"The value of BaseInt2 is:"<<baseInt2<<endl;
            cout<<"The sum of these values is:"<<baseInt1+baseInt2<<endl;
        }
};
int main(){
    Derived d1;
    d1.set_baseInt1(50);
    d1.set_baseInt2(45);
    d1.show();

    return 0;
}