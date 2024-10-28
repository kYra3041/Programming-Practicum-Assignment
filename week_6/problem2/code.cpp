#include <iostream>

// Function declaration
unsigned long long factorial(int x);

int main() {
    int number;
    
    // Get input from user
    std::cout << "Enter a positive integer to calculate its factorial: ";
    std::cin >> number;
    
    // Input validation
    if (number < 0) {
        std::cout << "Factorial cannot be calculated for negative numbers!" << std::endl;
    }
    else {
        std::cout << number << "! = " << factorial(number) << std::endl;
    }
    
    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int x) {
    // Base cases
    if (x == 0 || x == 1) {
        return 1;
    }
    
    // Recursive case
    return x * factorial(x - 1);
}