#include <iostream>
using namespace std;

// No parameters
void doPrint() {
    cout << "In doPrint()" << endl;
}

// One parameter
void printValue(int x) {
    cout << "Value: " << x << endl;
}

// Two parameters
int add(int x, int y) {
    return x + y;
}

int main() {
    doPrint();             // no arguments
    printValue(6);         // 6 is the argument
    cout << add(2, 3);     // 2 and 3 are arguments
    return 0;
}
