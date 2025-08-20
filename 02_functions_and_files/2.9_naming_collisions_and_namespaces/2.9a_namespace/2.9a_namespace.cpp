#include <iostream>

// Define a namespace
namespace math {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

// Define another namespace
namespace physics {
    double speed(double distance, double time) {
        return distance / time;
    }
}

int main() {
    // Using math namespace functions
    std::cout << "5 + 3 = " << math::add(5, 3) << '\n';
    std::cout << "5 * 3 = " << math::multiply(5, 3) << '\n';

    // Using physics namespace function
    std::cout << "Speed = " << physics::speed(100.0, 9.58) << " m/s\n";

    return 0;
}
