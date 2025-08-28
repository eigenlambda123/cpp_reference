#include <iostream>
#include <string>

double get_user_input() {
    std::cout << "Enter a number: ";
    double input{};
    std::cin >> input;

    return input;
}
