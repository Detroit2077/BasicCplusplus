#include<iostream>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }

};
class Test: virtual public student{
    protected:
        float maths, physics;
    public:
    void set_marks(float m, float p){
        maths = m;
        physics = p;
    }
    void print_marks(void){
        cout<<"Marks in maths and physics are "<<maths<<" and "<<physics<<endl;
    }

};
class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};
class result : public Test, public sports{
    float total;
    public:
    void display(){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
    }
};
int main(int argc, char const *argv[])
{
    result abhishek;
    abhishek.set_marks(56, 78);
    abhishek.set_number(13323);
    abhishek.set_score(9);
    abhishek.display();

    return 0;
}