#include<iostream>
using namespace std;
//Struct:       (It is used to store values of multiple variables of different data types)
// struct employee
// {
//     string post;
//     int eId;
//     char favChar;
//     float salary;
// }
// By using typedef keyword---->Its is used to shorten the text for using struct name...
typedef struct employee
{
    string post;
    int eId;
    char favChar;
    float salary;
}ep;
//Union:        (They provide better memory management because it allows only one tu=ype to execute at a time)
union money{
    int goods;
    char automobile;
    float dollar;
};
//Enum:              
int main(){
    ep Rohit;
    // ep Rohan;
    // ep Ram;

    Rohit.eId=01102;
    Rohit.post="manager";
    Rohit.favChar='R';
    Rohit.salary=250000000;
    //similarly do for other employees--->
    //cout<<""<<endl;
    cout<<"The post is:"<<Rohit.post<<endl;
    cout<<"The Id is:"<<Rohit.eId<<endl;
    cout<<"The favourite character is:"<<Rohit.favChar<<endl;
    cout<<"The salary is:"<<Rohit.salary<<endl;
    cout<<endl;

    union money m1;
    //union money m2;
    //union money m3; 
    m1.goods=95;
    m1.automobile='b';
    m1.dollar=100;
    cout<<"The amount of dollar is:"<<m1.dollar<<endl;
    cout<<"The name of automobile is:"<<m1.automobile<<endl; //this won't work/executed because union specifies only to use one type at a time
    cout<<"The amount of goods is:"<<m1.goods<<endl; //this won't work/executed because union specifies only to use one type at a time
    cout<<endl;

    enum Meal{breakfast,lunch,dinner};
    // cout<<"The value for breakfast is:"<<breakfast<<endl;
    // cout<<"The value for lunch is:"<<lunch<<endl;
    // cout<<"The value for dinner is:"<<dinner<<endl;
    Meal M1=breakfast;
    Meal M2=lunch;
    Meal M3=dinner;
    cout<<"The value for breakfast is:"<<M1<<endl;
    cout<<"The value for lunch is:"<<M2<<endl;
    cout<<"The value for dinner is:"<<M3<<endl;

    cout<<(M1==0)<<endl;
    cout<<(M2==2)<<endl;
    return 0;
}