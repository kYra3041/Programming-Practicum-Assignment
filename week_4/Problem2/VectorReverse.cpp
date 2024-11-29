#include <iostream>
#include <vector>
#include <sstream>
#include <string>

// Function to reverse the array
std::vector<int> reverseArray(const std::vector<int>& arr) {
    std::vector<int> reversed = arr;
    int left = 0;
    int right = reversed.size() - 1;
    
    while (left < right) {
        std::swap(reversed[left], reversed[right]);
        left++;
        right--;
    }
    
    return reversed;
}

// Function to get user input as a vector
std::vector<int> getUserInput() {
    std::vector<int> input;
    std::string line;
    
    std::cout << "Enter integers separated by spaces (press Enter when done): ";
    std::getline(std::cin, line);
    
    // Use stringstream to parse input
    std::stringstream ss(line);
    int num;
    
    while (ss >> num) {
        input.push_back(num);
    }
    
    return input;
}

// Function to print vector in bracket notation
void printVectorInBrackets(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Get user input
    std::vector<int> original = getUserInput();
    
    // Reverse the array
    std::vector<int> reversed = reverseArray(original);
    
    // Print the reversed array in bracket notation
    std::cout << "Reversed Array: ";
    printVectorInBrackets(reversed);
    
    return 0;
}