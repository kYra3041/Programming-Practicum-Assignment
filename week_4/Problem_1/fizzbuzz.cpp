#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declare a vector to store the results of FizzBuzz
    std::vector<std::string> fizzBuzzResults;

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            fizzBuzzResults.push_back("FizzBuzz"); // Multiple of both 3 and 5
        } else if (i % 3 == 0) {
            fizzBuzzResults.push_back("Fizz"); // Multiple of 3
        } else if (i % 5 == 0) {
            fizzBuzzResults.push_back("Buzz"); // Multiple of 5
        } else {
            fizzBuzzResults.push_back(std::to_string(i)); // Not a multiple of 3 or 5
        }
    }

    // Output the contents of the vector
    for (const auto& result : fizzBuzzResults) {
        std::cout << result << " ";
    }

    std::cout << std::endl;

    return 0;
}
