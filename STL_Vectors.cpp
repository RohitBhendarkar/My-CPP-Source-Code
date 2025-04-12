#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    int element,size=5;
    // cout<<"Enter the size of vector: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add in a vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back();
    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    //vec1.insert(iter,786);
    //vec1.insert(iter+2,786);
    //vec1.insert(iter+1,1000,786);


    //ways to create a vector:
    vector <int> vec1;  //zero-length float vector
    //vec1.display();

    vector <char>vec2(5);    //5 element character vector
    //vec2.push_back('5');
    //display(vec2);

    vector <char>vec3(vec2);   //4 element chaaracter vector from vec2
    //display(vec3);

    vector <float>vec4(6,3);   //6 element vector of 3s
    display(vec4);
    cout<<vec4.size();
    return 0;
}