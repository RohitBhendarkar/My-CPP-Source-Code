#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Using member functions:
int main(){
    ofstream objOf;
    objOf.open("SampleFile1.txt");
    objOf<<"HII... \nThis is me"<<endl;
    objOf<<"This is also me"<<endl;
    objOf.close();

    ifstream objIn;
    string str1,str2;
    objIn.open("SampleFile1.txt");
    //objIn>>str1>>str2;
    //cout<<str1<<str2;
    while(objIn.eof()==0){
        getline(objIn,str1);
        cout<<str1<<endl;
    }
    objIn.close();
    return 0;
}