#include <iostream>

int calculateGCD (int a, int b);

int main () {
    int num1, num2;

    //get input from user
    std::cout << "Enter two positive number to find their GCD: \n";
    std::cout << "1st number: ";
    std::cin >> num1;
    std::cout << "2nd number: ";
    std::cin >> num2;

    //input validation

    if (num1 <= 0 || num2 <=0) {
        std::cout << "please enter positive integers only :D" << std::endl;
        return 1;
    }

    int gcd = calculateGCD(num1, num2);
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}
int calculateGCD (int a, int b) {
    if (b == 0){
        return a;
}

return calculateGCD(b, a%b);
}