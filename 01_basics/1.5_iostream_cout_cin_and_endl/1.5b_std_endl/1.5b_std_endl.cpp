#include <iostream>

int main()
{
    std::cout << "Hi!";
    std::cout << "My name is Alex.";

    std::cout << "Hi!" << std::endl;
    std::cout << "My name is Alex." << std::endl;

    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}

