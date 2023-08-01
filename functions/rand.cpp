#include <iostream>

int main() {
    // This seeds the random number generator
    srand (time(NULL));

    // rand() grabs a random number
    int the_amazing_random_number = rand() % 89;
    std::cout << the_amazing_random_number;
}