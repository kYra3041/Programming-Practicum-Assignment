#include <iostream>

//function declaration
double add (double numA,double numB);
double subtract (double numA,double numB);

int main() {
    double numA, numB;
    int choice;

    //get input from user
    std::cout << "Insert the first number: ";
    std::cin >> numA;
    std::cout << "Insert the second number: ";
    std::cin >> numB;

    std::cout << "Choose the mathematical operation (insert 1 or 2)\n1. Addition \n2. Subtraction \nchoice: ";
    std::cin >> choice;

    //calculation based on choice



    return 0;
}