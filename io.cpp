#include<iostream>
using namespace std;
int main()
{
   int num1,num2,res;
   cout<<"Enter value of num1:\n";    //"<<"this is insertion operator.
   cin>>num1;   //">>" this is extraction operator.
   cout<<"Enter value of num2:\n";
   cin>>num2;

   cout<<"Sum is:"<<num1+num2<<endl;
   cout<<"Difference is:"<<num1-num2<<endl;
   cout<<"Multiplication:"<<num1*num2<<endl;
   cout<<"Division:"<<num1/num2<<endl;

   return 0;
}
