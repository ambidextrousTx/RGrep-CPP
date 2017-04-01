// File-related utilities to go with the grep application
#include <iostream>
#include <fstream>

bool match_in_file(std::string file_name, std::string search_candidate) {
    std::ifstream file_input_stream(file_name);
    std::string line;
    if (file_input_stream.is_open()) {
        std::cout << "Successfully opened " << file_name << std::endl;
        while(true) {
            if (file_input_stream.fail()) {
                std::cout << "The file input stream went into an error state"
                          << std::endl;
                break;
            }
            getline(file_input_stream, line);
            std::cout << line << std::endl;
            if (search_candidate == line) {
                return true;
            }
        }
        file_input_stream.close();
    } else {
        std::cout << "Could not open file for reading" << std::endl;
    }
    return false;
}

int match_count_in_file(std::string file_name, std::string search_candidate) {
    std::ifstream file_input_stream(file_name);
    std::string line;
    int count = 0;
    if (file_input_stream.is_open()) {
        std::cout << "Successfully opened " << file_name << std::endl;
        while(true) {
            if (file_input_stream.fail()) {
                std::cout << "Possibly reached EOF" << std::endl;
                break;
            }
            getline(file_input_stream, line);
            std::cout << line << std::endl;
            if (search_candidate == line) {
                count++;
            }
        }
        file_input_stream.close();
    } else {
        std::cout << "Could not open file for reading" << std::endl;
    }
    return count;
}
