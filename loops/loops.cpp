#include <iostream>

int main() {
    // while loop
    int c = 0;
    while (c <= 5) {
        std::cout << c;
        c++;
    }
    std::cout << "\n";

    // do-while loop
    int p = 300;
    do {
        std::cout << "Too expensive!";
    } while (p > 500);
    std::cout << "\n";

    // for loop
    for (int i = 0; i <= 5; i++) {
        std::cout << i;
    }
    std::cout << "\n";

    // for-each loop
    int fibonacci[5] = {0, 1, 2, 3};
    for (auto number : fibonacci) {
        std::cout << number;
    }
    std::cout << "\n";

    return 0;

}