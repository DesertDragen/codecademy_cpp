#include <iostream>

// Practice if / else if / else
int main() {
    double ph;
    std::cout << "Enter ph number: \n";
    std::cin >> ph;
    if (ph > 7) {
        std::cout << "Basic";
    }
    else if (ph < 7) {
        std::cout << "Acidic";
    }
    else {
        std::cout << "Neutral";
    }
}