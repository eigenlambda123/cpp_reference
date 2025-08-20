#include <iostream>

// Avoid this in real projects, but shown here for comparison
using namespace std;

int main() {
    // Preferred way: explicit std::
    std::cout << "Hello using std::cout" << std::endl;

    // With using-directive, std:: prefix is not needed
    cout << "Hello with using namespace std" << endl;

    return 0;
}
