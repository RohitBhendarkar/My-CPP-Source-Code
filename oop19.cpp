#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;

};

class Derived:Base{

};
/*      For access modifiers
                            Public Derivation      	Private Derivation    	Protected Derivation

Private members           	Not Inherited           Not Inherited              Not Inherited              
Protected members           Protected               Private                    Protected                    
Public members           	Public	                Private                    Protected
*/
int main(){
    //Protected access modifiers
    Base b;
    Derived d;
    //cout<<b.a<<endl;   //will not work s ince a is protected in both Base as well as Derived class
    //cout<<d.a<<endl;   //will not work s ince a is protected in both Base as well as Derived class
    return 0;
}