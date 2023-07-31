#include <iostream>

int main() {
    // && and Operator in action
    int hunger = true;
    int anger = true;
    if (hunger == true && anger == true) {
        std::cout << "Hangry\n";
    }

    // || or Operator in action
    int day = 6;
    if (day == 6 || day == 7) {
        std::cout << "Weekend\n";
    }

    // ! not Operator in action
    bool logged_in = false;
    if (!logged_in) {
        std::cout << "Try again\n";
    }
}