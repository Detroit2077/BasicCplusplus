#include <iostream>
#include <fstream>

int main() {
  // Declare variables
  int count = 0;
  std::string line;

  // Open the file
  std::ifstream file("coffee.txt");

  // Read the file line by line
  while (getline(file, line)) {
    // Count the number of blank spaces in the line
    for (char c : line) {
      if (c == ' ') {
        count++;
      }
    }
  }

  // Close the file
  file.close();

  // Print the number of blank spaces
  std::cout << "Number of blank spaces: " << count << std::endl;

  return 0;
}