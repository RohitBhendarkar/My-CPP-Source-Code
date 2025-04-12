#include<iostream>
using namespace std;

int main(){
    //Basic Example for Revision
    int a=5;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    //NEW Keyword(Operator):
    int *p=new int(14);
    //float *p=new float(45.45);
    cout<<"The value at address p is "<<*p<<endl;
    int *arr=new int[4];
    arr[0]=11;
    arr[1]=12;
    // arr[2]=13;
    *(arr+2)=13;
    arr[3]=14;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;


    //DELETE Operator: --->DELETE is keyword as well as an operator
    
    //delete arr;
    delete [] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;

    return 0;
}