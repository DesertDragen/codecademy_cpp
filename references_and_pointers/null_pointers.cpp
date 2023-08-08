#include <iostream>

int main() {
    int power = 9000;

    // Create the pointer - not initialized = dangerous - use nullptr
    int* ptr = nullptr;

    // Store the location of the power variable and value into the pointer
    ptr = &power;

    std::cout << ptr << "\n";

}