#include <iostream>
#include <string>

double calculate(double first_val, double second_val, std::string operatr) {
    if (operatr == "+") {
        return first_val + second_val;
    } else if (operatr == "-") {
        return first_val - second_val;
    } else if (operatr == "*") {
        return first_val * second_val;
    } else if (operatr == "/") {
        if (second_val == 0) {
            std::cout << "Division by zero is not allowed!" << std::endl;
            return 0;
        }
        return first_val / second_val;
    } else {
        std::cout << "Please enter a proper operator" << std::endl;
        return 0;
    }
}
