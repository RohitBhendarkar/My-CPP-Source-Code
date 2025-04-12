#include<iostream>
using namespace std;
template<class T>
class Vector{
   
    int size;
    public:
     T *arr;
        Vector(int m){
            size=m;
            arr= new T[size];
        }
    T dotProduct(Vector &v){
        T dp=0;
        for(int i=0;i<size;i++){
            dp+= this->arr[i]*v.arr[i];
        }
         return dp;
    }
};
int main(){
    // Vector v1(3);
    // v1.arr[0]=2;
    // v1.arr[1]=3;
    // v1.arr[2]=4;

    // Vector v2(3);
    // v2.arr[0]=5;
    // v2.arr[1]=3;
    // v2.arr[2]=2;
    //  int a=v1.dotProduct(v2);
    //  cout<<a<<endl;

    Vector <float>v1(3);
    v1.arr[0]=4.2;
    v1.arr[1]=0.83;
    v1.arr[2]=4.4;

    Vector <float>v2(3);
    v2.arr[0]=0.5;
    v2.arr[1]=0.03;
    v2.arr[2]=5.2;
    float a=v1.dotProduct(v2);
    cout<<"DOT Product of two vectors is:"<<a<<endl;
    return 0;
}