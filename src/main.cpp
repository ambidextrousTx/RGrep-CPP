// This is the starting point
//
#include <iostream>

int main() {
    std::string greeting("Welcome to RGrep-CPP");
    std::cout << greeting << std::endl;
    std::string firstInputString;
    std::string secondInputString;

    std::cout << "Enter the first string" << std::endl;
    std::cin >> firstInputString;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> secondInputString;

    if (firstInputString == secondInputString) {
        std::cout << "Match!" << std::endl;

    }

    return 0;
}
