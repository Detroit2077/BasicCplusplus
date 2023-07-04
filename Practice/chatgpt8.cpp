#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    ifstream fin;
    fin.open("something6.txt");

    if (!fin) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    string st;
    int num, count = 0;
    int h = 0;

    while (fin >> st) {
        count++;
    }

    fin.clear();
    fin.seekg(0, ios::beg);  // Reset file stream position to the beginning

    int* arr = new int[count];

    for (int i = 0; i < count; i++) {
        fin >> st;
        arr[i] = stoi(st);
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] > h) {
            h = arr[i];
        }
    }

    cout << "The largest number is: " << h << endl;

    delete[] arr;  // Free the dynamically allocated memory

    return 0;
}
