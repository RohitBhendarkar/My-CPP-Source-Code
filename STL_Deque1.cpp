#include <iostream>
#include <deque>
using namespace std;

void display(deque<int> &deq){
    deque<int> :: iterator it;
    for (it = deq.begin(); it != deq.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main ()
{
    
  deque<int> mydeque;
  mydeque.push_back(1);
  mydeque.push_back(34);
  mydeque.push_back(45);
  mydeque.push_back(56);
  mydeque.push_back(3);
  deque <int>mydeque2(5,100);
  mydeque2.push_back(23);
  mydeque2.push_back(87);
  deque<int> mydeque3(mydeque2);
  deque<int> mydeque4(mydeque3);
  deque<int>::iterator it = mydeque.begin();
  //cout << "mydeque contains:";
  //use of .end()method
//   while (it != mydeque.end())
//     cout << ' ' << *it++;   
//     cout << '\n';
 cout<<"Displaying deque elements:"<<endl;
 display(mydeque);
 mydeque.pop_back();
 cout<<"Displaying deque elements after using pop_back():"<<endl;
 display(mydeque);
//Use of .rbegin() method:Return reverse iterator to reverse beginning
 //mydeque.rbegin();
 //display(mydeque);
 cout<<"Displaying mydeque2 elements:"<<endl;
 display(mydeque2);
 cout<<"Displaying deque3 elements:"<<endl;
 display(mydeque3);
 // rend()--->Returns a reverse iterator pointing to the theoretical element preceding the first element in the deque container (which is considered its reverse end).
 mydeque2.rend();
 cout<<"Displaying mydeque2 elements after using rend():"<<endl;
 display(mydeque2);
 //cbegin()--->Return const_iterator to beginning
 //cend()--->Return const_iterator to end
 //crbegin()--->Return const_reverse_iterator to reverse beginning
 //crend()--->Return const_reverse_iterator to reverse end
 //shrink_to_fit()--->Shrink to fit

 cout<<"Displaying the size of mydeque3: "<<mydeque3.size()<<endl;
 cout<<"Displaying the max_size of mydeque3:"<<mydeque3.max_size()<<endl;
 cout<<"Displaying the empty status of mydeque4:"<<mydeque4.empty()<<endl;
 

  return 0;
}