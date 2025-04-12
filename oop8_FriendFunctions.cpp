/*Friend Functions:
Properties of friend functions
1.Not in the scope of class
2.since it is not in the sope of a class,it can not be called from the object of that class.
Hence c1.sumComplex()--->>> invalid
3.can be invoked without the help of any object
4.usually contains(takes) objects as an arguments
5.can be declared inside public or private section of the class 
6.It can not access the members directly by their names and needs object_name.member_function_name
to access any member. 
*/

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        /*Declaring friend function
        Below line means that non member function-sumComplex function is allowed to access and do anyhing 
        with private data members of class */
        friend Complex sumComplex(Complex o1,Complex o2);
};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
//More on friend_functions(simple example)
// class Y;
// class X{
//     int data;
//     public:
//         void setValue(int value){
//             data=value;
//         }
//         friend void add(X,Y);
// };
// class Y{
//     int num;
//     public:
//         void setValue(int value){
//             num=value;
//         }
//         friend void add(X,Y);
// };
// void add(X o1,Y o2){
//     cout<<"Adding data of x and Y object gives "<<o1.data+o2.num;
// }
//More on friend_functions(complex example)
class C2;
class C1{
    int val1;
    friend void exchange(C1 &,C2 &);
    public:
        void inData(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class C2{
    int val2;
    friend void exchange(C1 &,C2 &);
    public:
        void inData(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
void exchange(C1 &x,C2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    // Complex c1,c2,c3,sum;
    // c1.setNumber(2,3);
    // c1.printNumber();
    // c2.setNumber(4,56);
    // c2.printNumber();
    // c3.setNumber(25,3);
    // c3.printNumber();
    // sum=sumComplex(c1,c2);
    // sum.printNumber();
        // X x;
        // x.setValue(5);
        // Y y;
        // y.setValue(4);

        // add(x,y);

            C1 oc1;
            C2 oc2;
            oc1.inData(54);
            oc2.inData(46);
            exchange(oc1,oc2);
            cout<<"The value of C1 after exchanging becomes:"<<endl;
            oc1.display();
            cout<<"The value of C2 after exchanging becomes:"<<endl;
            oc2.display();



    return 0;
}
