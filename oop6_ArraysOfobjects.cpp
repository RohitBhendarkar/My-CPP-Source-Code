#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 10500;
        cout << "Enter ID of an Employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The ID of this Employee is " << id << endl;
    }
};
int main()
{
    // Employee Rohan,Roshan;
    // Rohan.setId();
    // Rohan.getId();

    // Roshan.setId();
    // Roshan.getId();
    
    Employee meta[3]; // meta is an imaginary name of company who has stored its employees in an array
    for (int i = 0; i < 3; i++)
    {
        meta[i].setId();
        meta[i].getId();
    }
    return 0;
}