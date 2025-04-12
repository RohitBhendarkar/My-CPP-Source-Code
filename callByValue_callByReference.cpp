#include<iostream>
using namespace std;

int sum(int x,int y){
    int z=x+y;
    return z;
}
// This will not swap values
//call by value
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//This will swap values of a and b
//call by reference by using pointers
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
//call by reference using c++ reference variables
// void swapReferenceVar(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

//return by reference
int & swapReferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int a=5,b=6;
    cout<<"The sum of two numbers is:"<<sum(a,b)<<endl;
    
    cout<<"the value of a is:"<<a<<" and value of b is:"<<b<<endl;
    //swap(a,b);--->This will not swap values
    //swapPointer(&a,&b);//--->This will swap values of a and b 
    swapReferenceVar(a,b)=345;
    cout<<"the value of a is:"<<a<<" and value of b is:"<<b<<endl;


    
    return 0;
}