#include <iostream>

int main (){
    int n;
    long long sum = 0; //using long long to handle sum
    std::string explanation = "(Explanation =";

    std::cout << "Insert a natural number (n) = "; //ask user for input
    std::cin >> n;

    for (int i = 1; i <= n; ++i) { //Calculating sum and showing explanation
        sum += i;
        explanation += " " + std::to_string(i);
        if (i < n) {;
            explanation += " +";
        }
    }
    explanation += " = " + std::to_string(sum) + " )";

    //output the result and the explanation
    std::cout << "Sum = " << sum << std::endl;
    std::cout << explanation << std::endl;

    return 0;
}