#include <iostream>

// When the * is used in a declaration, it's creating a pointer
// When * is not used in a declaration, it's a deference operator
int main() {
    int power = 9000;

    int* ptr = &power;

    // This prints the location of the pointer
    std::cout << ptr << "\n";

    // This prints the value of the pointer
    std::cout << *ptr << "\n";
}