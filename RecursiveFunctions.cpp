#include<iostream>
using namespace std;
int factorial(int n){
    /*Factorial of a number:
    n!=n*(n-1)!
i.e. 5!=5*4*3*2*1=120
    0!= 1 by defintion
    1!= 1 by defintion
    */
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
// int fibb(int n){
//     if(n<2){
//         return 1;
//     }
//     return fibb(n-2) + fibb(n-1);
// }
int main(){
    
   int a,b;
   cout<<"Enter a and b:"<<endl;
   cin>>a>>b;
   cout<<"The factorial of "<<a<<" is:"<<factorial(a)<<endl;
  // cout<<"The term in fibbonacci series at position "<<b<<" is:"<<fibb(b)<<endl;
    return 0;
}