#include<iostream>

using namespace std;
int main(){
    int age;
//Sequence control structures:--->>Statements are executed one after another without checking any conditions.
//Selection control structure:--->>Statements are executed/selected on the basis of specified conditions(if _else,else_if ladder & switch case statements)
cout<<"This is an example of if_else statement."<<endl;
cout<<"Enter your age:"<<endl;
cin>>age;
    if(age>18)
    {
        cout<<"You are fully eligible..."<<endl;
    }
    else if(age==18)
    {
        cout<<"You are partially eligible..."<<endl;
    }
    
    else{
        cout<<"You are not eigible..."<<endl;
    }
cout<<"This is an example of switch case statement."<<endl;
    switch (age)
    {
    case 18:
        cout<<"You are 18 now"<<endl;
        break;
    case 19:
        cout<<"You are 19 now"<<endl;
    
    default:
        cout<<"*****"<<endl;
        break;
    }
//Loop control structure:
    
    

}

