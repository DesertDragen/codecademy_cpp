#include <iostream>

// Practice input, output and some math
int main() {
    // Add your code below  
    // Weight of item on Earth to Mars Converter
    double weightOnMars;
    double weightOnEarth;
    std::cout << "Enter weight of item in grams: \n";
    std::cin >> weightOnEarth;
    weightOnMars = (weightOnEarth / 9.81) * 3.711;
    std::cout << "Weight of item on Mars is " << weightOnMars << " grams.\n\n";

    // Miles to Km Converter
    double miles;
    double km;
    std::cout << "Enter distance in miles: \n";
    std::cin >> miles;
    km = miles * 1.609344;
    std::cout << miles << " miles is equal to " << km << " km.\n";
}