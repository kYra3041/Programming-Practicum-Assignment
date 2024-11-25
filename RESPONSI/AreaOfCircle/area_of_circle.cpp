#include <iostream>

int main() {
    const double pi = 3.141592;
    double radius, area;

    // Prompt user for radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate area
    area = pi * radius * radius;

    // Display result
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}
