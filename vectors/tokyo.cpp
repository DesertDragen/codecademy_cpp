#include <iostream>
#include <vector>

int main() {
    std::vector<double> subway_adult = {800, 1200, 1500};
    std::vector<double> subway_child = {400, 600, 750};
    std::vector<double> subway_senior(3);

    std::cout << subway_child[2];
}