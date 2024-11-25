#include <iostream>
#include <cassert>
#include <cmath>

const double PI = 3.141592; // Hardcoded PI value

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

// Test function for circle area calculation
void testCalculateCircleArea() {
    // Test case 1: radius = 5
    double radius1 = 5.0;
    double expectedArea1 = PI * radius1 * radius1;
    assert(std::abs(calculateCircleArea(radius1) - expectedArea1) < 0.0001);
    std::cout << "Test 1 passed: radius = " << radius1 << ", area = " << expectedArea1 << std::endl;

    // Test case 2: radius = 10
    double radius2 = 10.0;
    double expectedArea2 = PI * radius2 * radius2;
    assert(std::abs(calculateCircleArea(radius2) - expectedArea2) < 0.0001);
    std::cout << "Test 2 passed: radius = " << radius2 << ", area = " << expectedArea2 << std::endl;

    // Test case 3: radius = 2.5
    double radius3 = 2.5;
    double expectedArea3 = PI * radius3 * radius3;
    assert(std::abs(calculateCircleArea(radius3) - expectedArea3) < 0.0001);
    std::cout << "Test 3 passed: radius = " << radius3 << ", area = " << expectedArea3 << std::endl;

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    // Run all tests
    testCalculateCircleArea();

    return 0;
}
