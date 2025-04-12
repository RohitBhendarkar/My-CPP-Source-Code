#include<iostream>
using namespace std;
class StoreItem{
    int id;
    float price;
    public:
       void setData(int a,float b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"Item Code:"<<id<<endl;
            cout<<"Item Price:"<<price<<endl;
        }

};
int main(){
    int size=5;
    
    StoreItem *ptr=new StoreItem[size];
    int p;
    float q;
    StoreItem *ptrTemp=ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
   for (int  i = 0; i < size; i++)
   {
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
   }
   
    
    return 0;
}