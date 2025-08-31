#include <iostream>
#include <vector>

int main() {
    // Example 1: unsigned makes sense (array size & indexing)
    std::vector<int> nums = {10, 20, 30, 40};
    for (unsigned int i = 0; i < nums.size(); i++) {  // size() returns unsigned
        std::cout << "nums[" << i << "] = " << nums[i] << "\n";
    }

    std::cout << "----\n";

    // Example 2: signed vs unsigned comparison trap
    int a = -1;
    unsigned int b = 1;

    if (a < b) {
        std::cout << "a < b (expected)\n";
    } else {
        std::cout << "a is NOT < b (surprise!)\n";
    }

    return 0;
}
