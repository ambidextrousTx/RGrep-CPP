// This is the starting point
//
#include <iostream>
#include <fstream>
#include <sstream>

bool exact_match(std::string, std::string, bool);
bool exact_match_count(std::string, std::string, bool);
bool match_in_file(std::string, std::string);

int main(int argc, char * argv[]) {
    std::string first_input;
    std::string second_input;

    std::cout << "Enter the first string" << std::endl;
    std::cin >> first_input;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> second_input;

    if (exact_match(first_input, second_input, false)) {
        std::cout << "Match!" << std::endl;
    }

    if (exact_match_count(first_input, second_input, false) == 1) {
        std::cout << "Match count correct: case insensitive!" << std::endl;
    }

    if (exact_match(first_input, second_input, true)) {
        std::cout << "Case insensitive match!" << std::endl;
    }

    if (exact_match_count(first_input, second_input, true) == 1) {
        std::cout << "Match count correct: case sensitive!" << std::endl;
    }

    std::string file_name;
    std::cout << "Enter a filename in which to look for the string"
              << std::endl;
    std::cin >> file_name;

    if (match_in_file(file_name, first_input)) {
        std::cout << "Match!" << std::endl;
    }

    return 0;
}
