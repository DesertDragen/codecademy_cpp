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

// Water the plant -> return the value of the if/elseif/else statements and the && operator
std::string needs_water(int days, bool is_succulent) {
    if (is_succulent == false && days > 3) {
        return "Time to water the plant.\n";
    }
    else if (is_succulent == true && days <= 12) {
        return "Don't water the plant!\n";
    } 
    else if (is_succulent == true && days >= 13) {
        return "Go ahead and give the plant a little water.\n";
    }
    else {
        return "Don't water the plant!\n";
    }
}

// Palindrome -> Checks if text is a palindrome or not
bool is_palindrome(std::string text) {
    bool value;

    for (int i = 0; i < text.size() / 2; i++) {
        if (text[i] == text[text.size() - 1 - i]) {
            value = true;
        }
        else {
            return false;
        }
    }

    return value;
}

int main() {
    // Introductions
    introduction("Nora", "Nova");

    // The average of two numbers
    std::cout << "The average is " << average(42.0, 24.0) << "\n";

    // Calculating the number to the power of 10
    std::cout << tenth_power(2) << "\n";

    // The first three multiples of a given number
    std::cout << "The first 3 multiples: ";
    for (int element : first_three_multiples(8)) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    // Figuring out when to water the plant
    std::cout << "Water the plant? " << needs_water(10, false);

    // Is it a palindrome?
    std::cout << "Is palindrome? " << is_palindrome("madam") << "\n";
    std::cout << "Is palindrome? " << is_palindrome("amezaiku") << "\n";

}