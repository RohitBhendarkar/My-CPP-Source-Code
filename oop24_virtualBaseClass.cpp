#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }
        void print_number(void){
            cout<<"Your Roll Number is:"<<roll_no<<endl;
        }
};
class Test:public virtual Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m,float p){
            maths=m;
            physics=p;
        }
        void print_marks(void){
            cout<<"You have obtained "
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
        }
};
class Sports:public virtual Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};
class Result:public Test,public Sports{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            print_number();
            print_marks();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    Result r1;
    r1.set_number(2);
    r1.set_marks(89,76.45);
    r1.set_score(9.5);
    //r1.print_score();
    r1.display();
    return 0;
}