#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNumber;

public:
    void set_rollNumber(int);
    void get_rollNumber(void);
};
void Student::set_rollNumber(int r)
{
    rollNumber = r;
}
void Student::get_rollNumber()
{
    cout << "The Roll Number is:" << rollNumber << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks(void)
{
    cout << "The marks obtained in Maths is: " << maths << endl;
    cout << "The marks obtained in Physics is: " << physics << endl;
}

class Results : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_rollNumber();
        get_marks();
        cout << "Your percentage(%) is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    // Student s1;
    // Exam e;
    Results r1;
    r1.set_rollNumber(101);
    r1.set_marks(95.94, 89.40);
    // r1.get_marks();
    r1.display_result();
    return 0;
}