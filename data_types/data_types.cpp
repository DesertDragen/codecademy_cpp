#include <iostream>
#include <string>

int main() {
    // int data type
    int length = 5;
    std::cout << length << "\n";

    // double data type
    double pizza_price = 12.99;
    std::cout << pizza_price << "\n";

    // Type conversion from double to int
    double x = 6.7;
    int y = (int) x;
    std::cout << "After conversion, " << x << " becomes " << y << "\n";

    // char data type
    char first_letter = 'a';
    std::cout << first_letter << "\n";

    // string data type
    std::string word = "Code";
    std::cout << word << "\n";

    // Concatenation
    std::string name = word + "cademy";
    std::cout << name << "\n";

    // char access
    std::cout << "the 3rd letter of " << name << " is " << name[2] << "\n";

    // string length
    std::cout << "There are " << name.length() << " letters in " << name << "\n";

    return 0;
}