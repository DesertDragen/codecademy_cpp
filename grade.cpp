#include <iostream>

// Practice if / else
int main() {
    double grade;
    std::cout << "Enter your grade percentage: \n";
    std::cin >> grade;
    
    if (grade > 70) {
        std::cout << "Pass";
    }
    else {
        std::cout << "Fail";
    }
}