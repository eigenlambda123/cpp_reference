#include <iostream>

int main()
{
    bool b{};
    std::cout << "Enter a boolean value (true or false): ";

    std::cin >> std::boolalpha >> b;  // enables word input
    std::cout << std::boolalpha       // enables word output
              << "You entered: " << b << '\n';

    return 0;
}
