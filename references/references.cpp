#include <iostream>

// References are aliases
int main() {
    int soda = 99;
    // Making pop a reference of soda (pop == soda)
    int &pop = soda;

    // Increment pop, since pop ir a reference of soda, soda wil increment too
    pop++;

    std::cout << soda << "\n";
    std::cout << pop << "\n";
}