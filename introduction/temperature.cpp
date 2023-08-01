#include <iostream>

// Practice input, output and math for a conversion
int main() {
    double tempf;
    double tempc;
    std::cout << "Enter temperature in Fahrenheit: \n";
    std::cin >> tempf;
    tempc = (tempf - 32) * 5 / 9;
    std::cout << "The temperature is " << tempc << " degrees Celsius\n";
}