#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
//Function Objects(Functors):Function wrapped in class so that it will be available like an object
    int arr[]={1,3,45,6,78,54,78,90};
    //Sorting array
    
    //in Ascending order
    sort(arr,arr+8);    //8 is the no. of elements do you want to sort
    //In Descending order
    sort(arr,arr+8,greater<int>());
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}