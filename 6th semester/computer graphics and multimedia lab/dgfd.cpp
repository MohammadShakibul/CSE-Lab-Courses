#include <iostream>
#include <cstring>
#define MAX_INPUT_SIZE 100
int main() {
    char input[MAX_INPUT_SIZE];
    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_INPUT_SIZE);

    size_t length = std::strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    if (std::strncmp(input, "//", 2) == 0) {
        std::cout << "The input is a single-line comment.\n";
    }
    else {
        char *start = std::strstr(input, "/*");
        char *end = std::strstr(input, "*/");
        if (start != nullptr && end != nullptr && start < end) {
            std::cout << "The input is a multiple-line comment.\n";
        }
        else {
            std::cout << "The input is neither a single-line nor a multiple-line comment.\n";
        }
    }
    return 0;
}
