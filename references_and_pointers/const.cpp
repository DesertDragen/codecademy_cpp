#include <iostream>

// Const makes the number stay the same throughout the while program
// Making the const i a reference keeps i the same number too
int square(int const &i) {
    return i * i;

}

int main() {
    int side = 5;


    std::cout << square(side) << "\n";
}