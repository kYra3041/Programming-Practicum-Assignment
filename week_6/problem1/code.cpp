#include <iostream>

//function declaration
double add (double numA,double numB);
double subtract (double numA,double numB);

// Function to add two numbers
double add (double numA, double numB) {
    return numA + numB;
}

// Function to subtract two numbers
double subtract (double numA, double numB) {
    return numA - numB;
}

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
    if (choice == 1) {
        std::cout << numA << " + " << numB << " = " << add(numA,numB) << std::endl;
    }
    else if (choice == 2) {
        std::cout << numA << " - " << numB << " = " << subtract(numA,numB) << std::endl;
    }
    else {
        std::cout << "Invalid operation, make sure it is typed in correctly" << std::endl;
    }

    return 0;
}