#include<iostream>
using namespace std;
class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealPtComplex(Complex ,Complex );
        int sumCompPtcomplex(Complex ,Complex );
         
};
class Complex{
    int a,b;
    //individually declaring functions as friends
    // friend int Calculator::sumRealPtComplex(Complex ,Complex );
    // friend int Calculator::sumCompPtcomplex(Complex ,Complex );

    //Aliter:Declaring the entire class as friend
    friend class Calculator;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int Calculator:: sumRealPtComplex(Complex o1,Complex o2){
            return (o1.a+o2.a);
}
int Calculator::sumCompPtcomplex(Complex o1, Complex o2)
{
    return (o1.b+o2.b);
}

int main(){
    Complex o1,o2;
    o1.setNumber(1,2);
    o2.setNumber(2,7);
    o1.printNumber();
    o2.printNumber();
    Calculator calc;
    int res1=calc.sumRealPtComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is:"<<res1<<endl;
    int res2=calc.sumCompPtcomplex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is: "<<res2<<"i"<<endl;
    return 0;
}