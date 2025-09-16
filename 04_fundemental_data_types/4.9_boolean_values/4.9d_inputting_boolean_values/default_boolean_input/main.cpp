#include <iostream>

int main()
{
    bool b{};
    std::cout << "Enter a boolean value (0 or 1): ";
    std::cin >> b;

    std::cout << "You entered: " << b << '\n'; // prints 0 or 1
    return 0;
}
