#include<iostream>
using namespace std;
//Base Class 
class Employee{
    
    public:
    int id;
    float salary;
        Employee(int inpId){
            id=inpId;
            salary=34.0;
        }
        Employee(){}
};
//Creating a derived class derived from base class Employee
class Programmer: Employee{
    public:
    int langCode;
    Programmer(int inpId){
        id=inpId;
        langCode=10;
    }
    
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee e1(1),e2(2);
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;
    Programmer skilled(1);
    cout<<skilled.langCode<<endl;
    //cout<<skilled.id<<endl;
    skilled.getData();

    return 0;
}

/*
Derived Class Syntax
class {{derived_class_name}} : {{visibility-mode}} {{base-class-name}}
{
    class member-functions/methods/etc...
}

Note...
1.Default visibility mode is private
2.Private Visibility Mode:Public members of the base class becomes Private members of the derived class 
3.Public Visibility Mode:Public members of the base class becomes Private members of the derived class 
4.Private members are never
*/ 