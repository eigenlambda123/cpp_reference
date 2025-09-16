#include <iostream>

int main()
{
    bool b{};

    // Numeric input
    std::cout << "Enter 0 or 1: ";
    std::cin >> b;
    std::cout << "Numeric form: " << b << '\n';

    // Switch to boolalpha
    std::cout << "Enter true or false: ";
    std::cin >> std::boolalpha >> b;
    std::cout << "Word form: " << std::boolalpha << b << '\n';

    return 0;
}
