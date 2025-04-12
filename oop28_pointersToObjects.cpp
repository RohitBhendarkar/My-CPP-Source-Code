#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"The real part is:"<<real<<endl;
            cout<<"The imaginary part is:"<<imaginary<<"i"<<endl;
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
};
int main(){
    //Complex c1;
    //c1.setData(3,7);
    //c1.getData();
    //Complex *ptr=&c1;
    Complex *ptr=new Complex;
    //(*ptr).setData(4,6);
    //(*ptr).getData();

    //Arrow Operator:
    ptr->setData(4,89);
    ptr->getData();


    //Arrow of objects:
    Complex *ptr1=new Complex[3];
    ptr1->setData(1,3);
    ptr1->getData();
    return 0;
}