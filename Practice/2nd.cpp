// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     ifstream fin;
//     string st;

//     fin.open("something.txt");
//     getline(fin, st);
//     getline(fin, st);

//     cout<<st;
//     return 0;
// }

//Write a C++ program to read a binary file and display the contents of the file on the screen.

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream file("owl.jpg", ios::in | ios::binary);

    if (file) {
        // Get the size of the file
        file.seekg(0, ios::end);
        int size = file.tellg();
        file.seekg(0, ios::beg);

        // Allocate a buffer to hold the file contents
        vector<char> buffer(size);

        // Read the file contents into the buffer
        file.read(&buffer[0], size);

        // Output the buffer to the console
        cout.write(&buffer[0], size);

        file.close();
    } else {
        cout << "Failed to open file." << endl;
    }

    return 0;
}