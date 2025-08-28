#include <iostream>
#include <string>
#include "util/get_user_input.h"
#include "util/calculate.h"

std::string get_operator() {
    std::cout << "Choose Operator (+, -, *, /): ";
    std::string operatr{};
    std::cin >> operatr;

    return operatr;
}


int main() {
    int value_one{ get_user_input() };
    int value_two{ get_user_input() };
    std::string operatr { get_operator() };
    std::cout << "First num: " << value_one << "\n";
    std::cout << "Second num: " << value_two << "\n";
    std::cout << "Operator: "<< operatr << "\n";
    double res { calculate(value_one, value_two, operatr) };
    std::cout << "Result: " << value_one << " " << operatr << " " << value_two << " = " << res << "\n";


}
