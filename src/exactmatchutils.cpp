// Exact matching utilities

#include <iostream>

bool match_insensitive(std::string first, std::string second) {
    if (first.size() != second.size()) {
        return false;
    }

    for (int i = 0; i < first.size(); ++i) {
        if (std::tolower(first[i]) != std::tolower(second[i])) {
            return false;
        }
    }

    return true;
}

bool exact_match(std::string first, std::string second, bool case_insensitive=false) {
    if (case_insensitive) {
        return match_insensitive(first, second);
    } else {
        return first == second;
    }
}
