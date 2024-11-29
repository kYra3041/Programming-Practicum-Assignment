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

// Utility function to combine vector elements into a single string
string combineVector(const vector<string>& vec) {
    string output = "";

    for (size_t idx = 0; idx < vec.size(); ++idx) {
        if (idx != 0) {
            output += " ";
        }
        output += vec[idx];
    }

    return output;
}

int main() {
    int maxNumber = 100;

    vector<string> testSequence = generateFizzBuzz(maxNumber);
    string actualResult = combineVector(testSequence);

    // Expected output for comparison
    string expectedResult = "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz";

    cout << "Expected Output:" << endl << expectedResult << endl;

    if (actualResult == expectedResult) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
        cout << "Actual Output: " << actualResult << endl;
    }

    return 0;
}
