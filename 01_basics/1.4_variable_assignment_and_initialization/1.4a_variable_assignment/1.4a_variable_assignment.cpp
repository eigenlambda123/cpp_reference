#include <iostream>

int main() {
    int width; // Declare a variable
    width = 5; // Assign the value 5
    std::cout << "Initial width: " << width << '\n'; // prints 5

    width = 7; // Reassign a new value
    std::cout << "Updated width: " << width << '\n'; // prints 7

    // Common mistake: Using == instead of =
    int height;
    height == 10; // This does nothing – comparison is ignored

    std::cout << "Height (uninitialized): " << height << '\n'; // prints garbage value

    // Correct assignment
    height = 10;
    std::cout << "Height after assignment: " << height << '\n'; // prints 10

    return 0;
}
