#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1("something.txt");
    ifstream file2("something2.txt");
    ofstream outputFile("something3.txt");

    if (file1 && file2 && outputFile) {
        string line;
        
        // Read and write the contents of the first input file
        while (getline(file1, line)) {
            outputFile << line << endl;
        }
        
        // Read and write the contents of the second input file
        while (getline(file2, line)) {
            outputFile << line << endl;
        }
        
        cout << "Files concatenated successfully!" << endl;
        
        file1.close();
        file2.close();
        outputFile.close();
    } else {
        cout << "Failed to open files." << endl;
    }

    return 0;
}
