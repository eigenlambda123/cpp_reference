#include <iostream>

int main() {
    // Correct: defining multiple variables in one line (but not recommended)
    int x, y;
    x = 5;
    y = 10;
    std::cout << "x + y = " << x + y << '\n';

    // Incorrect: redundant type declarations (will cause a compiler error)
    // int a, int b;

    // Incorrect: mixing types in one declaration (will cause a compiler error)
    // int c, double d;

    // Best practice: define each variable separately with comments
    int age;         // stores person's age
    double height;   // stores person's height in meters

    age = 20;
    height = 1.75;
    std::cout << "Age: " << age << ", Height: " << height << " meters\n";

    return 0;
}
