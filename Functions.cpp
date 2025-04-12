#include<iostream>
using namespace std;
//Function prototype
//type function_name(arguments)
int sum(int a,int b);   //This is acceptable
int sum(int,int);   //This is also acceptable
/*int sum(int a,b);   //This is not acceptable*/
void g();
/*void g(void);     //This is also acceptable*/


int main(){
    g();
    int num1,num2;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is:"<<sum(num1,num2);  
    return 0;
}

int sum(int a,int b){
    //a and b are formal parameters and they will be taking values from actual parameters num1&num2
    int c=a+b;
    return c;
}

void g(){
    cout<<"Welcome..."<<endl;
}
