#include<iostream>
using namespace std;

template <class T>
class Test{
    public:
        T data;
        Test(T a){
        data = a;
        }
        void display();
};
template <class T>
void Test<T>::display(){
            cout<<data<<endl;
        }
void func(int a){
    cout<<"I am function 1:"<<endl;
}
template <class T>
void func(T a){
    cout<<"I am templatized func():"<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am templatized func1():"<<a<<endl;
}
int main(){
    //Test <int>t1(7);
    //Test <float>t1(7.5);
    //Test <char>t1('8');
    //cout<<t1.data<<endl;
    //t1.display();

    //func(4);    //Exact match takes the highest priority
    func1(6);
    return 0;
}