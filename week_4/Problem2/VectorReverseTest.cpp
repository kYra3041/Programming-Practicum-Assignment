#include <iostream>
#include <vector>
#include <cassert>
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

// Function to print a vector as a string for better test output
std::string vectorToString(const std::vector<int>& vec) {
    std::string result = "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        result += std::to_string(vec[i]);
        if (i < vec.size() - 1) {
            result += ", ";
        }
    }
    result += "]";
    return result;
}

int main() {
    // Test cases
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> expected1 = {5, 4, 3, 2, 1};
    assert(reverseArray(test1) == expected1);
    std::cout << "Test 1 Passed: " << vectorToString(test1) << " -> " << vectorToString(expected1) << std::endl;

    std::vector<int> test2 = {10, 20, 30};
    std::vector<int> expected2 = {30, 20, 10};
    assert(reverseArray(test2) == expected2);
    std::cout << "Test 2 Passed: " << vectorToString(test2) << " -> " << vectorToString(expected2) << std::endl;

    std::vector<int> test3 = {42};
    std::vector<int> expected3 = {42};
    assert(reverseArray(test3) == expected3);
    std::cout << "Test 3 Passed: " << vectorToString(test3) << " -> " << vectorToString(expected3) << std::endl;

    std::vector<int> test4 = {};
    std::vector<int> expected4 = {};
    assert(reverseArray(test4) == expected4);
    std::cout << "Test 4 Passed: Empty Array" << std::endl;

    std::cout << "All Tests Passed Successfully!" << std::endl;
    return 0;
}
