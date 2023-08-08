#include <iostream>

// When the & is used in declaration, it's a reference operator
// When & is not used in a declaration, it's an address operator
int main() {
    int power = 9000;

    std::cout << power << "\n";
    // Prints where the power is stored in teh memory
    std::cout << &power << "\n";
}