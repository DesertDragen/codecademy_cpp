#include <iostream>
# include <vector>

// Add up the total of even numbers and multiply up the total of odd numbers in the vector
int main() {
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    int even_total = 0;
    int odd_total = 1;

    // Iterating through the vector
    for (int i = 0; i < numbers.size(); i++) {
        // Checking if the number in the vector is even
        if (numbers[i] % 2 == 0) {
            even_total = even_total + numbers[i];
        }
        else {
            odd_total = odd_total * numbers[i];
        }
    }

    std::cout << "Sum of even number is " << 12 << "\n";
    std::cout << "Product of odd numbers is " << odd_total;    
}