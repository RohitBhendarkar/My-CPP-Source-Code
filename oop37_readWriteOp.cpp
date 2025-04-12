#include<iostream>
#include<fstream>
using namespace std;


//Using Constructors:
int main(){
    //connecting our file with hout stream:
    ofstream hout("SampleFile1.txt");
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    //writing a string to the file
    hout<<name<<" is my name.";
    hout.close();

    ifstream in("SampleFile1.txt");
    string content;
    in>>content;
    cout<<"The content of the file is: "<<content<<endl;
    in.close();
    return 0;
}