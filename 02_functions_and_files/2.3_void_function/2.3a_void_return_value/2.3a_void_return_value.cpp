#include <iostream>
using namespace std;

// Void function declaration
void greetUser() {
    cout << "Hello! Welcome to the program." << endl;
}

int main() {
    // Calling the void function
    greetUser();
    cout << "This line runs after the function call." << endl;

    return 0;
}
