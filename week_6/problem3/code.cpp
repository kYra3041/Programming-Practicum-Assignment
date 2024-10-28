#include <iostream>

int calculateGCD (int a, int b);

int main () {
    int num1, num2;

    //get input from user
    std::cout << "Enter two positive number to find their GCD: \n" << std::endl;
    std::cout << "1st number: ";
    std::cin >> num1;
    std::cout << "2nd number: ";
    std::cin >> num2;

    //input validation

    if (num1 <= 0 || num2 <=0) {
        std::cout << "please enter positive integers only :3" << std::endl;
        return 1;
    }

    return 0;
}