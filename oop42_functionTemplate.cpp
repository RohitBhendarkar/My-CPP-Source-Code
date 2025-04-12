#include<iostream>
using namespace std;

// float funcAverage(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

template <class T>
void Swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    float a=funcAverage(5,4.8);
    printf("The average of these no. is %.3f",a);
    cout<<endl;
    
    int x=8,y=6;
    Swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}