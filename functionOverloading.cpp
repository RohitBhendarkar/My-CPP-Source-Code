#include<iostream>
using namespace std;
// int sum(int a){
//     cout<<"function with one argument"<<endl;
//     int res=a+6;
//     return res;
// }
// int sum(int a,int b){
//     cout<<"function with two arguments"<<endl;
//     int res=a+b;
//     return res;
// }
//Calculating Volume of a cube
float volume(int l){
    return l*l*l;
}
//Calculating Volume of a cylinder
float volume(double r,int h){
    return (3.14*r*r*h);
}
//Calculating Volume of a cube
int volume(int l,int b,int h){
    return l*b*h;
}
int main(){
    int a,b,c;
    cout<<"Enter the values of a, b and c:"<<endl;
    cin>>a>>b>>c;
    //cout<<"the sum is:"<<sum(a)<<endl;
    //cout<<"The sum of two numbers is:"<<sum(a,b)<<endl;
    cout<<"The volume of a cube is "<<volume(a)<<" cu.cm"<<endl;
    cout<<"The volume of a cylinder is "<<volume(a,b)<<" cu.cm"<<endl;
    cout<<"The volume of a rectangle is "<<volume(a,b,c)<<" cu.cm"<<endl;

    
    return 0;
}