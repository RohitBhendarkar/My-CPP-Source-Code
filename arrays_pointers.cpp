#include<iostream>
using namespace std;

int main(){
//Array declaration--->
    int marks[5]={9,8,7,6,6,};
    cout<<"Following are the marks of 5 students stored in marks array:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    int mathMarks[5];
    //Storing marks in mathMarks array
    mathMarks[0]=56;
    mathMarks[1]=78;
    mathMarks[2]=89;
    mathMarks[3]=95;
    mathMarks[4]=35;
    cout<<"Following are the marks of 5 students stored in mathMarks array:"<<endl;
    //Printing elements in mathaMarks array
    for(int i=0;i<=4;i++){
    cout<<"The value of mathMarks "<<i<<" is "<<mathMarks[i]<<endl;
    }
    cout<<endl;

//Pointers and arrays
    int *p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    return 0;
}