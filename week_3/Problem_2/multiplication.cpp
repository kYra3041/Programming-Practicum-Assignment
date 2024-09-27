#include <iostream>
#include <iomanip>

int main() {
    int n;

    // Prompt user for input
    std::cout << "Enter an integer (n): ";
    std::cin >> n;

    // Print the multiplication table
    std::cout << "Multiplication table for " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << std::setw(2) << i << " = " << std::setw(3) << (n * i) << std::endl;
    }

    return 0;
}