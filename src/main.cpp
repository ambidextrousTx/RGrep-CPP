// This is the starting point
//
#include <iostream>

int main() {
    std::string greeting("Welcome to RGrep-CPP");
    std::cout << greeting << std::endl;
    std::string inputString;

    std::cin >> inputString;
    std::cout << "You are looking for " << inputString << std::endl;

    return 0;
}
