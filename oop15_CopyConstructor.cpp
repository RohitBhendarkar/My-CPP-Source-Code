#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }
        // Number(Number &obj){
        //     cout<<"Copy Constructor is Called!!!"<<endl;
        //     a=obj.a;
        // }
        // When no copy constructor is found, compiler supplies its own copy constructor
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(55),z2;
    x.display();
    y.display();
    z.display();

    //Number z1(x);       //z1 should exactly resemble x or y or z
    //Number z1(y);
    Number z1(z);       
    z1.display();
    //z2=z1;      //copy constructor will not be called       
    Number z3=z;
    z3.display();        //copy constructor will be called 
    return 0;
}