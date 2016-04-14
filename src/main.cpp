// This is the starting point
//
#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::string firstInputString;
    std::string secondInputString;

    std::cout << "Enter the first string" << std::endl;
    std::cin >> firstInputString;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> secondInputString;

    if (firstInputString == secondInputString) {
        std::cout << "Match!" << std::endl;
    }

    std::string fileName;
    std::cout << "Enter a filename in which to look for the string" << std::endl;
    std::cin >> fileName;

    std::ifstream fileInputStream(fileName);
    std::string line;
    if (fileInputStream.is_open()) {
        std::cout << "Successfully opened " << fileName << std::endl;
        while(true) {
            if (fileInputStream.fail()) {
                std::cout << "The file input stream went into an error state" << std::endl;
                break;
            }
            getline(fileInputStream, line);
            std::cout << line << std::endl;
            if (firstInputString == line) {
                std::cout << "Match!" << std::endl;
            }
        }
    } else {
        std::cout << "Could not open file for reading" << std::endl;
    }

    return 0;
}
