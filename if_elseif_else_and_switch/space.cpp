#include <iostream>

// Practice writing a program that converts the weight of a person from Earth to another weight on a planet
int main() {
    double earthWeight;
    int number;
    double planetWeight;
    std::cout << "Enter your weight from Earth: \n";
    std::cin >> earthWeight;
    std::cout << "Enter a number for the planet you want to fight on: \n";
    std::cin >> number;

    if (number == 1) {
        planetWeight = (earthWeight / 9.81) * 3.7;
        std::cout << "Your weight on Mercury is " << planetWeight << "\n";
    }
    else if (number == 2) {
        planetWeight = (earthWeight / 9.81) * 8.87;
        std::cout << "Your weight on Venus is " << planetWeight << "\n";
    }
    else if (number == 3) {
        planetWeight = (earthWeight / 9.81) * 3.711;
        std::cout << "Your weight on Mars is " << planetWeight << "\n";
    }
    else if (number == 4) {
        planetWeight = (earthWeight / 9.81) * 24.79;
        std::cout << "Your weight on Jupiter is " << planetWeight << "\n";
    }
    else if (number == 5) {
        planetWeight = (earthWeight / 9.81) * 10.44;
        std::cout << "Your weight on Saturn is " << planetWeight << "\n";
    }
    else if (number == 6) {
        planetWeight = (earthWeight / 9.81) * 8.69;
        std::cout << "Your weight on Uranus is " << planetWeight << "\n";
    }
    else if (number == 7) {
        planetWeight = (earthWeight / 9.81) * 11.15;
        std::cout << "Your weight on Neptune is " << planetWeight << "\n";
    }
    
}