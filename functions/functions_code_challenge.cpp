#include <iostream>
#include <cmath>
#include <vector>

// Introduce yourself
void introduction(std::string first_name, std::string last_name) {
    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

// Calculate the average
double average(double num1, double num2) {
    double total = (num1 + num2) / 2;
    return total;
}

// Calculate the tenth power -> n^10, pow(n, 10)
int tenth_power(int num) {
    return pow(num, 10);
}

// Returns the first 3 multiples
std::vector<int> first_three_multiples(int num) {
    std::vector<int> multiples = {num, num * 2, num * 3};
    return multiples;
}

int main() {
    introduction("Nora", "Nova");

    std::cout << "The average is " << average(42.0, 24.0) << "\n";

    std::cout << tenth_power(2) << "\n";

    std::cout << "The first 3 multiples: ";
    for (int element : first_three_multiples(8)) {
        std::cout << element << " ";
    }
}