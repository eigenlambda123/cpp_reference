#include <iostream>
int main() {
    bool bFalse { 0 }; // okay: false
    bool bTrue  { 1 }; // okay: true
    // bool bNo { 2 }; // error: narrowing conversion

    std::cout << bTrue << " " << bFalse;
}
