#include <iostream>

int main()
{
    int width { 5 }; // regular initialization
    std::cout << "Width: " << width << std::endl;

    int unusedVar1 { 42 }; // show warning
    [[maybe_unused]] int unusedVar2 { 42 }; // suppresses unused warning

    return 0;
}
