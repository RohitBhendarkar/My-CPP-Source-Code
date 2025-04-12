#include <iostream>
#include <deque>
using namespace std;
/*
deque (usually pronounced like "deck") is an irregular acronym of double-ended queue.
 Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted
 on both ends (either its front or its back).
 
 Deque destructor:Destroys the container object.

 */
int main()
{
    int i;

    // constructors used in the same order as described above:
    deque<int> first;                               // empty deque of ints
    deque<int> second(4, 100);                      // four ints with value 100
    deque<int> third(second.begin(), second.end()); // iterating through second
    deque<int> fourth(third);                       // a copy of third

    // the iterator constructor can be used to copy arrays:
    int myints[] = {16, 2, 77, 29};
    deque<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

    cout << "The contents of fifth are:";
    deque<int>::iterator it;
    for (it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';

    return 0;
}