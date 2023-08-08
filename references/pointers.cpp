#include <iostream>

int main() {
    int power = 9000;

    // Storing the location of the variable into a pointer
    // int* makes a pointer - the * is the pointer
    int* ptr = &power;

    std::cout << ptr << "\n";
}

// References and pointers do the same thing
// Pointers can be encountered in older projects
// Codecademy says to avoid all pointers
