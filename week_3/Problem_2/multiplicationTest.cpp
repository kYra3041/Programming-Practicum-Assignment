#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int n = 5;  // Test input value for multiplication table
    std::cout << "Input = " << n << std::endl;

    // Expected multiplication table output as a string
    std::string expected_output =
        "Multiplication table for 5:\n"
        "5 x  1 =   5\n"
        "5 x  2 =  10\n"
        "5 x  3 =  15\n"
        "5 x  4 =  20\n"
        "5 x  5 =  25\n"
        "5 x  6 =  30\n"
        "5 x  7 =  35\n"
        "5 x  8 =  40\n"
        "5 x  9 =  45\n"
        "5 x 10 =  50\n";

    // Generate the multiplication table for the test input
    std::string output = "Multiplication table for " + std::to_string(n) + ":\n";
    for (int i = 1; i <= 10; ++i) {
        output += std::to_string(n) + " x " + std::to_string(i) + " = " + std::to_string(n * i) + "\n";
    }

    // Print the generated output
    std::cout << output;

    // Compare the output with the expected output
    std::cout << "Expected Output:\n" << expected_output << std::endl;

    if (output == expected_output) {
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

    return 0;
}
