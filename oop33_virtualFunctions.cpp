#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base=15;
        virtual void display(){
            cout<<" 1 Displaying Base class variable var_base: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=25;
            void display(){
                cout<<" 2 Displaying Base class variable var_base: "<<var_base<<endl;
                cout<<" 2 Displaying Derived class variable var_derived: "<<var_derived<<endl;
            }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived;
    //base_class_pointer->var_base=23;
    base_class_pointer->display();
    return 0;
}