#include<iostream>
#include<fstream>
/*
These classses are used for working with files in C++:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/
//  In order to work with files in c++, you will have to open it.
//  Primarily, there are two ways to open a file:
//  1. Using has_trivial_copy_constructor
//  2.Using the member function open() of the class 
using namespace std;
int main(){
    string str1="Welcome...";
    string str2;

    //Opening file using constructor and writing in it:
    ofstream out("SampleFile1.txt");     //Write operation
    out<<str1;
    cout<<"Writing a content in SampleFile1.txt:"<<endl;
    cout<<str1<<endl;
    //Opening file using constructor and reading from it:
    ifstream in("SampleFile2.txt");
    in>>str2;
    // getline(in,str2);
    // getline(in,str2);
    // getline(in,str2);
    cout<<"Reading content from SampleFile2.txt:"<<endl;
    cout<<str2;
    return 0;
}