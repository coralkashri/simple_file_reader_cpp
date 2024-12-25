# Simple File Reader C++

## Usage Example
```
#include "file_reader.hpp"

int main() {
    std::ifstream file("test.txt");

    for (std::string_view line : file_reader<'\n'>(file)) {
        std::cout << line << "\n";
    }

    return 0;
}
```

The file reader accepts NTTP char to define the delimiter.

## Credits
word_delimited_by usage is taken from: https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/