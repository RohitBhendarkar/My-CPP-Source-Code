#include <iostream>
using namespace std;
class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID:";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count; // Default value is 0...
// int Employee::count=1000;
int main()
{
    Employee e1,e2, e3;
    // e1.id=001;       //This is not allowed because it has a private access modifier
    // e1.count=1;

    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}

//Summary:

//Count is the static data member of class Employee...
//getCount() is the static function of class Employee...
