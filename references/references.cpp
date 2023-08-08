#include <iostream>

int main() {
    int soda = 99;
    // Making pop a reference of soda (pop == soda)
    int &pop = soda;

    pop++;

    std::cout << soda << "\n";
    std::cout << pop << "\n";
}