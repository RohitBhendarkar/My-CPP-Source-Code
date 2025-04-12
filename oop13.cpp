#include<iostream>
using namespace std;
//Constructors with defaul arguments
class Simple{
    int data1;
    int data2;
    int data3;
    int data4;
    public:
        Simple(int a,int b,int c=0){
            data1=a;
            data2=b;
            data3=c;
            
        }
        void printData();
};
void Simple::printData(){
        cout<<"The value of data1 data2 and data3 is "<<data1<<" "<<data2<<" and "<<data3<<endl;
        }
int main(){
    // Simple s1(2);
    // s1.printData();

    Simple s2(2,5);
    s2.printData();

    // Simple s3(1,2,3);
    // s3.printData();
    return 0;
}