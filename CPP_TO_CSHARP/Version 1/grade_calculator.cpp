#include <string>
#include <iostream>
#include <sstream>

     template <class T>
       T Input(const std::string& prompt) {
          T value;
          std::string input;
         while (true) {
            std::cout << prompt;
            std::getline(std::cin, input);
            std::istringstream stream(input);
            if (stream >> value && stream.eof()) {
                 break;
            } else {
                 std::cerr << "Wrong data type, try again!\n";
              }
        }
        return value;
     }
     
extern "C" {
    double getInput(const char* prompt) {
        return Input<double>(prompt);
    }
}
