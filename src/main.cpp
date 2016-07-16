// This is the starting point
//
#include <iostream>
#include <fstream>
#include <sstream>

bool exact_match(std::string, std::string);

int main(int argc, char * argv[]) {
    std::cout << "You supplied " << argc << " arguments, which were: "
              << std::endl;
    for (size_t i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    std::string first_input;
    std::string second_input;

    std::cout << "Enter the first string" << std::endl;
    std::cin >> first_input;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> second_input;

    if (exact_match(first_input, second_input)) {
        std::cout << "Match!" << std::endl;
    }

    std::string fileName;
    std::cout << "Enter a filename in which to look for the string"
              << std::endl;
    std::cin >> fileName;

    std::ifstream file_input_stream(fileName);
    std::string line;
    if (file_input_stream.is_open()) {
        std::cout << "Successfully opened " << fileName << std::endl;
        while(true) {
            if (file_input_stream.fail()) {
                std::cout << "The file input stream went into an error state"
                          << std::endl;
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
