// Write a C++ program to read a CSV file and display the data in a tabular format on the screen.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    ifstream file("something.csv");

    if (file) {
        string line;
        vector<vector<string>> data;

        // Read the CSV file line by line
        while (getline(file, line)) {
            stringstream ss(line);
            vector<string> row;
            string value;

            // Parse the line by splitting it with the delimiter (comma)
            while (getline(ss, value, ',')) {
                row.push_back(value);
            }

            // Store the parsed values in the data structure
            data.push_back(row);
        }

        // Display the data in a tabular format
        for (const auto& row : data) {
            for (const auto& value : row) {
                cout << value << "\t";
            }
            cout << endl;
        }

        file.close();
    } else {
        cout << "Failed to open file." << endl;
    }

    return 0;
}
