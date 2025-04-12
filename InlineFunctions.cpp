#include<iostream>
using namespace std;
    inline int product(int a,int b){

        return a*b;
    }
    float moneyReceived(float currentMoney,float factor=1.04){      //"factor" is default argument
            return currentMoney*factor;
    }
    // int strlen(const char *p){       //"const char" is constant argument

    // }
int main(){
    //int a,b,c;
    //cout<<"Enter the values of a and b"<<endl;
    //cin>>a>>b;
    //cout<<"The product is "<<product(a,b)<<endl;
    int currentMoney=100000;
    cout<<"If you have "<<currentMoney<<" Rs in your bank account,you will receive "<<moneyReceived(currentMoney)<<"     After 1 year"<<endl;
    cout<<"For VIP:If you have "<<currentMoney<<" Rs in your bank account,you will receive "<<moneyReceived(currentMoney,1.1)<<"     After 1 year"<<endl;
    return 0;
}