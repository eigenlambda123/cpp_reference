#include <iostream>

// Function in the global namespace
void printMessage() {
    std::cout << "Hello from the global namespace!" << std::endl;
}

namespace demo {
    // Function with the same name inside a namespace
    void printMessage() {
        std::cout << "Hello from the demo namespace!" << std::endl;
    }

    void callGlobal() {
        // Use :: to explicitly call the global namespace function
        ::printMessage();
    }
}

int main() {
    // Calls the global function directly
    printMessage();

    // Calls the namespaced version
    demo::printMessage();

    // Calls the global version explicitly from inside a namespace
    demo::callGlobal();

    return 0;
}
