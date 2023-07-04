#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[]){
    ofstream fout;
    fout.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\country.txt");
    fout<<"US"<<endl;
    fout<<"UK"<<endl;
    fout.close();
    fout.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\capital.txt");
    fout<<"Washington"<<endl;
    fout<<"London"<<endl;
    fout.close();
    const int N = 80;
    char line[N];
    ifstream fin;
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\country.txt");
    cout<<"Contents of country.txt"<<endl;
    while(fin){
        fin.getline(line, N);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\capital.txt");
    cout<<"Contents of capital.txt"<<endl;
    while(fin){
        fin.getline(line, N);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}