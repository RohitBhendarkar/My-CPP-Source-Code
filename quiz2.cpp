#include<iostream>
using namespace std;

int main(){
    cout<<"Q.Traverse and print array elements using while and do while loop?"<<endl;
    cout<<"Ans-->"<<endl;
    int marks[5]={9,8,7,6,6,};
    cout<<"Using do_while loop:"<<endl;
    cout<<"Following are the marks of 5 students stored in marks array:"<<endl;
    int i=0;
    do{
        cout<<marks[i]<<endl;
        i++;
    }
    while(i<=4);
    cout<<endl;
    int mathMarks[5];
    mathMarks[0]=56;
    mathMarks[1]=78;
    mathMarks[2]=89;
    mathMarks[3]=95;
    mathMarks[4]=35;
    
     cout<<"Using while loop:"<<endl;
    cout<<"Following are the marks of 5 students stored in mathMarks array:"<<endl;
    int j=0;
    while (j<5)
    {
        cout<<mathMarks[j]<<endl;
        j++;
    }
    
    return 0;
}