#include <iostream>
#include <forward_list>
using namespace std;
void display(forward_list<int> &flst){
    forward_list<int> :: iterator it;
    for (it = flst.begin(); it != flst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main ()
{
  // constructors used in the same order as described above:

  forward_list<int> first;                      // default: empty
  forward_list<int> second (3,77);              // fill: 3 seventy-sevens
  forward_list<int> third (second.begin(), second.end()); // range initialization
  forward_list<int> fourth (third);            // copy constructor
  forward_list<int> fifth (std::move(fourth));  // move ctor. (fourth wasted)
  forward_list<int> sixth = {3, 52, 25, 90};    // initializer_list constructor
    //forward_list<int> :: iterator it= first.begin();
  cout << "first forward_list:" ; 
  for (int& x: first)  
  cout << " " << x; cout << '\n';
  cout << "second forward_list:"; 
  for (int& x: second) 
  cout << " " << x; cout << '\n';
  cout << "third forward_list:";  
  for (int& x: third)  
  cout << " " << x; cout << '\n';
  cout << "fourth forward_list:"; 
  for (int& x: fourth) 
  cout << " " << x; cout << '\n';
  cout << "fifth forward_list:";  
  for (int& x: fifth)  
  cout << " " << x; cout << '\n';
  cout << "sixth forward_list:";  
  for (int& x: sixth)  
  cout << " " << x; cout << '\n';

  return 0;
}