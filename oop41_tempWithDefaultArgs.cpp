#include<iostream>
using namespace std;

template <class T1=int, class T2=float,class T3=char>
class Test{
    public:
        T1 a;
        T2 b;
        T3 c;
    Test(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl; 
        cout<<"The value of c is: "<<c<<endl;
    }  

};
int main(){
    Test<> t(8,4.6,'7');
    cout<<endl;
    t.display();
    cout<<endl<<endl;

    Test <float,char,int> t1(34.8,'g',5);
    t1.display();
    return 0;

   
}