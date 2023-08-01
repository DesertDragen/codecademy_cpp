#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> grocery = {"Cookies", "Tomato", "Dragon Fruit"};

    grocery.push_back("Pasta");
    grocery.push_back("Orange Juice");

    std::cout << grocery.size();
}