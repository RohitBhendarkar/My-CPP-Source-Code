#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//Constants:
    const int a=45;
    const float b=34.5f;    //The values of variables with const keyword can't be changed(i.e. constant variables).
//Manipulators:--->>1)endl  2)setw
    int l=44,m=555,n=6666,o=777777;
    cout<<"Output without endl"<<endl;
    cout<<l<<"  "<<m<<"  "<<n<<"  "<<o<<endl;
    
    cout<<"Output with endl"<<endl; //endl manipulator specifies a new line  ...
    cout<<l<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;
    cout<<endl;
    cout<<"Output without setw"<<endl;
    cout<<l<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;
    cout<<endl;
    cout<<"Output with setw"<<endl; //setw manipulator specifies/sets space width before or after the field...
    cout<<setw(6)<<l<<endl;
    cout<<setw(6)<<m<<endl;
    cout<<setw(6)<<n<<endl;
    cout<<setw(6)<<o<<endl;
    cout<<endl;
//Operator Precedence:
    int x=5,y=8;
    int z=(x*9)+y;
    int w=((((x*5)+y)-25)+92);
    cout<<w<<endl;
    cout<<z;
    return 0;
}
