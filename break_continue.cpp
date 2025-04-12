#include<iostream>
using namespace std;

int main(){
    cout<<"This is example of break statement."<<endl;
    for(int i=1;i<=50;i++){
        if(i==45){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"This is example of continue statement."<<endl;
    for (int i = 0; i < 25; i++)
    {
        if(i%2==0)
        continue;
        else
        cout<<i<<endl;
    }
    
return 0;
}
