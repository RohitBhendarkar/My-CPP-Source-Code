#include<iostream>
using namespace std;
int main(){
    cout<<"Q.Write a program to print table of a number by usind do while loop?(assume number(n)=6)"<<endl;
    cout<<"Ans:->The table of 6 is:"<<endl;
    int i=1,n=6;
    do{
       cout<<n*i<<endl;
       i++;
    } 
    while(i<=10);
    
}