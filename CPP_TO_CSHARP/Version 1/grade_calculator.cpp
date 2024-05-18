#include <string>
#include <iostream>
#include <limits>

template <class T>
T Input(const std::string& prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Wrong data type, try again!\n";
        }
    }
    return value;
}

extern "C" {
    int getInput(const char* prompt) {
        return Input<int>(prompt);
    }
}
