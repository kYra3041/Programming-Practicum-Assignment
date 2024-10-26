#include <iostream>

void line(int n); // Function prototype

int main() {
    line(50);
    std::cout << "function trial program" << std::endl;
    line(40);
    std::cout << "function is used to shorten the program" << std::endl;
    std::cout << "function can be called multiple times in a program" << std::endl;
    line(30);

    return 0;
}

void line(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << "-";
    }
    std::cout << std::endl;
}