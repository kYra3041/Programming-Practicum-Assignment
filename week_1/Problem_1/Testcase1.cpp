#include <iostream> //for input and output operation
#include <string> //string operation
using namespace std;

long int getInput(string prompt){ 
    // This function is now redundant, but keeping it for consistency
    // No more user input, returning hardcoded values directly in the code.
    long int value = 0;
    return value; // Returns a placeholder value (not used anymore)
}

string format(long int value) { 
    string original = to_string(value);
    string formatted;

    for (int i = 0; i < original.length(); i++) {
        formatted += original[i];
        if (i != original.length() - 1 && (original.length() - i - 1) % 3 == 0) 
            formatted += '.';
    }

    return "Rp" + formatted + ",00"; //returns the formatted string started with Rp and ended with ,00
}

void displayResult(string name, long int gross, long int tax, long int installment, long int insurance, long int net) { 
    // Displays the formatted payslip information for an employee
    cout << "Payslip for Employee" << endl
         << "---------------------" << endl 
         << "Name: " << name << endl
         << "Gross Salary: " << format(gross) << endl
         << "Tax (20%)   : " << format(tax) << endl
         << "Installment : " << format(installment) << endl
         << "Insurance   : " << format(insurance) << endl
         << "Net Salary  : " << format(net) << endl;
}

int run_main() { 
    // Hardcoded values
    string name = "John Doe"; // Hardcoded name
    long int gross = 15000000; // Hardcoded gross salary
    long int tax = gross * 0.2; // Calculate tax
    long int installment = 250000; // Hardcoded installment
    long int insurance = 150000; // Hardcoded insurance
    long int net = gross - tax - installment - insurance; // Calculate net salary

    // Display the payslip using the hardcoded values
    displayResult(name, gross, tax, installment, insurance, net);

    return 0;
}

int main(int argc, char* argv[]) {
    if (argc > 1 && std::string(argv[1]) == "test") {
        // Test scenario (if needed)
        return 0;
    }
    else {
        return run_main(); // Call the main function
    }
}
