#include <iostream>
#include "file_reader.hpp"

int main() {
    std::ifstream file("test.txt");

    for (std::string_view line : file_reader<'\n'>(file)) {
        std::cout << line << "\n";
    }

    return 0;
}
