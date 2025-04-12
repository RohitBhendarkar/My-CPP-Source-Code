#include<iostream>
using namespace std;
/*
Syntax of templates with multiple(comma seperated) parameters:
template<class T1,class T2>
class nameOfClass{
}

*/

template<class T1,class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1=a;
            data2=b;
        }
        void display(){
           cout<<this->data1<<this->data2; 
        }
};
int main(){
    myClass <int,char>obj(6,'8');
    //myClass <int,char>obj;
    obj.display();
    return 0;
}