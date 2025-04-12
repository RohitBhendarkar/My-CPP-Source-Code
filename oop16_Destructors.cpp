#include<iostream>
using namespace std;

// Destructor neither takes an argument nor retuens any value

int count=0;
class Num{
    public:
        Num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }
        //Declaring DESTRUCTOR  
        ~Num(){            
            cout<<"This is the time when Destructor is called for object number "<<count<<endl; 
            count--;
        }
};
int main(){
    cout<<"Welcome to the main function..."<<endl;
    cout<<"Creating first object n1 "<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects.."<<endl;
        Num n2,n3;
        cout<<"Exitting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}