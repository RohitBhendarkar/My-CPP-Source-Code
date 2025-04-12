#include<iostream>
#include<string>
using namespace std;
        //Nesting of member functions
class Binary{
    string s;

    public:
    void read(void);
    void checkBin(void);
    void ones(void);
    void display(void);
};
void Binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void Binary::checkBin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect format please type binary number..."<<endl;
            exit(0);
        }
    }
}
void Binary:: ones(void){
     for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
     }
}
void Binary:: display(void){
    cout<<"The binary number is:"<<endl;
     for(int i=0;i<s.length();i++){
        cout<<s.at(i);
     }
     cout<<endl;
     
}
int main(){
    //nesting of member function
    Binary b;
    b.read();
    b.checkBin();
    b.display();
    cout<<"The ones complement of the given number is ";
    b.ones();
    b.display();
    return 0;
}