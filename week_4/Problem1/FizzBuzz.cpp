#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to generate FizzBuzz sequence up to 'limit'
vector<string> generateFizzBuzz(int limit) {
    vector<string> sequence;

    for (int num = 1; num <= limit; ++num) {
        if (num % 3 == 0 && num % 5 == 0) {
            sequence.push_back("FizzBuzz");
        } else if (num % 3 == 0) {
            sequence.push_back("Fizz");
        } else if (num % 5 == 0) {
            sequence.push_back("Buzz");
        } else {
            sequence.push_back(to_string(num));
        }
    }

    return sequence;
}

int main() {
    int maxNumber = 100; // Specify the range limit
    vector<string> fizzBuzzSequence = generateFizzBuzz(maxNumber);

    for (const string& value : fizzBuzzSequence) {
        cout << value << " ";
    }

    return 0;
}
