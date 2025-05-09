//Dynamic Initialization of Objects using Constructors
#include<iostream>
using namespace std;
class BankDeposit{
    int principle;
    int years;
    float interestRate;
    float returnValue; 

    public:
        BankDeposit(){

        }
        BankDeposit(int p,int y,float r);   //r can be a value like 0.05
        BankDeposit(int p,int y,int r);     //r can be a value like 5

        void show();
};
BankDeposit::BankDeposit(int p,int y,float r){
    principle=p;
    years=y;
    interestRate=r;
    returnValue=principle;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+interestRate);
    }
}
BankDeposit::BankDeposit(int p,int y,int R){
    principle=p;
    years=y;
    interestRate=float(R)/100;
    returnValue=principle;
    for(int i=0;i<y;i++){
        returnValue=returnValue * (1+interestRate);
    }
}
void BankDeposit::show(){
    cout<<"Principle amount was "<<principle<<endl
    <<"And Return value after "<<years<<" years is "<< returnValue<<endl;

}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the values of p y and r "<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
     bd1.show();
    cout<<"Enter the values of p y and r "<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);   
    bd2.show();
    return 0;
}