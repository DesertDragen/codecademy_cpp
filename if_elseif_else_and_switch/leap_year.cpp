#include <iostream>

// Practicing && (and), || (or), and ! (not)
int main() {
    int y;

    std::cout << "Enter year: ";
    std::cin >> y;

    if (y < 1000 || y > 9999) {
        std::cout << "Invalid entry.\n";
    }
    else if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0) {
        std::cout << y << " falls on a leap year.\n";
    }
    else {
        std::cout << y << " is not a leap year.\n";
    }
}

// Modulo %
// If y completely divides x, the result of the expression is 0.
// If x is not completely divisible by y, then the result will be the remainder in the range [0, y-1]