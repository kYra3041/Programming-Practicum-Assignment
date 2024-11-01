#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    int n = 5;  // Test input value for multiplication table
    std::cout << "Input = " << n << std::endl;

    // Expected multiplication table output line-by-line
    std::string expected_output_lines[] = {
        "Multiplication table for 5:",
        "5 x  1 =   5",
        "5 x  2 =  10",
        "5 x  3 =  15",
        "5 x  4 =  20",
        "5 x  5 =  25",
        "5 x  6 =  30",
        "5 x  7 =  35",
        "5 x  8 =  40",
        "5 x  9 =  45",
        "5 x 10 =  50"
    };

    // Generate the multiplication table output and compare line-by-line
    bool test_passed = true;
    std::ostringstream output_stream;

    output_stream << "Multiplication table for " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::ostringstream line;
        line << n << " x " << std::setw(2) << i << " = " << std::setw(3) << (n * i);

        // Print and compare each line
        std::string generated_line = line.str();
        std::cout << generated_line << std::endl;
        output_stream << generated_line << "\n";
        if (generated_line != expected_output_lines[i]) {
            test_passed = false;
        }
    }

    // Final test result
    std::cout << "Expected Output:\n";
    for (const std::string& line : expected_output_lines) {
        std::cout << line << std::endl;
    }

    if (test_passed) {
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

    return 0;
}
