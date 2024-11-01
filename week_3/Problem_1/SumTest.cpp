#include <iostream>
#include <string>

int main() {
    int n = 5;  // Test input value
    int expected_sum = 15;  // Expected result for sum of numbers from 1 to n

    std::cout << "Input = " << n << std::endl;

    // Calculate sum and build explanation
    int sum = 0;
    std::string explanation = "(Explanation =";

    for (int i = 1; i <= n; ++i) {
        sum += i;
        explanation += " " + std::to_string(i);
        if (i < n) {
            explanation += " +";
        }
    }
    explanation += " = " + std::to_string(sum) + " )";

    // Display output and compare with expected results
    std::cout << "Output = " << sum << std::endl;
    std::cout << "Expected Output = " << expected_sum << std::endl;

    if (sum == expected_sum) {
        std::cout << explanation << std::endl;
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

    return 0;
}