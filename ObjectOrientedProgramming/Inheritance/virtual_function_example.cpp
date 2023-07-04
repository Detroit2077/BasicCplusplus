#include<iostream>
#include<cstring>
using namespace std;
class Abhishek{
    protected:
        string name;
    int age;
    public:
        Abhishek(string n, int a){
            name = n;
            age = a;
        }
        void display(){cout<<"SomeThing"<<endl;}
};
class Game_Development: public Abhishek{
    protected:
        string name_the_engine;
    public:
        Game_Development(string n, int a, string e) : Abhishek(n, a){
            name_the_engine = e;
        }
        void display(){
            cout<<"Name of the person is : "<<name<<endl;
            cout<<"Age of that guy is: "<<age<<endl;
            cout<<"Name of the Engine he uses: "<<name_the_engine<<endl;
        }
};
class Coding: public Abhishek{
    protected:
        int num_of_language_learned;
    public:
        Coding(string n, int a, int c): Abhishek(n, a){
            num_of_language_learned = c;
        }
        void display(){
            cout<<"Name of the person is : "<<name<<endl;
            cout<<"Age of that guy is: "<<age<<endl;
            cout<<"Number of Coding Language he learned: "<<num_of_language_learned<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Abhishek *ptr[2];
    Coding c("abhishek", 19, 3);
    Game_Development d("abhishek", 19, "Unreal_Engine");
    ptr[0] = &c;
    ptr[1] = &d;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}