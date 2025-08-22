#include <iostream>

int main() {
    // Initialization: declare and assign in one step
    int width { 5 }; // width is initialized to 5
    std::cout << "Width: " << width << '\n'; // prints 5

    // Assignment: define first, assign later
    int height; // height is declared but uninitialized
    height = 10; // now assigned a value
    std::cout << "Height: " << height << '\n'; // prints 10

    return 0;
}
