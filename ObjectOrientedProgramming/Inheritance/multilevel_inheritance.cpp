#include<iostream>
using namespace std;
class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r;
}

void student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam: public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m, float p){
    maths = m;
    physics = p;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}

class Result: public Exam{
        float percentage;
    public:
        void display(){
            cout <<"The percentage obtained is: "<<(maths+physics)/2<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Result abhishek;
    abhishek.set_roll_number(13323);
    abhishek.set_marks(99, 96);
    abhishek.display();
    return 0;
}