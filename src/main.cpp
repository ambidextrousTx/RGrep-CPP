// This is the starting point
//
#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::string first_input;
    std::string second_input;

    std::cout << "Enter the first string" << std::endl;
    std::cin >> first_input;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> second_input;

    if (first_input == second_input) {
        std::cout << "Match!" << std::endl;
    }

    std::string fileName;
    std::cout << "Enter a filename in which to look for the string" << std::endl;
    std::cin >> fileName;

    std::ifstream file_input_stream(fileName);
    std::string line;
    if (file_input_stream.is_open()) {
        std::cout << "Successfully opened " << fileName << std::endl;
        while(true) {
            if (file_input_stream.fail()) {
                std::cout << "The file input stream went into an error state" << std::endl;
                break;
            }
            getline(file_input_stream, line);
            std::cout << line << std::endl;
            if (first_input == line) {
                std::cout << "Match!" << std::endl;
            }
        }
    } else {
        std::cout << "Could not open file for reading" << std::endl;
    }

    return 0;
}
