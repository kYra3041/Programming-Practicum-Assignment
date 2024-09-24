#include <iostream> //for input and output operation
#include <string> //string operation
using namespace std;

long int getInput(string prompt){ //getInput = reads a long int value from the user input, returns the input value
    long int value;
    cout << prompt;
    cin >> value;
    return value;
}

string format(long int value) { 
    string original = to_string(value);
    string format;

    for (int i = 0; i < original.length(); i++) {
        format += original[i];
        if (i != original.length() - 1 && (original.length() - i - 1) % 3 == 0) 
            format += '.';
    }

    return "Rp"+format + ",00"; //returns the formatted string started with Rp and ended with ,00
}

void displayResult(string name, long int gross, long int tax, long int installment, long int insurance, long int net){ // displays the formatted paysslip information for an imployee
    cout << "Payslip for Employee" << endl
    << "---------------------" << endl 
    << "Name: " << name << endl
    << "Gross Salary: " << format(gross) << endl
    << "Tax (20%)   : " << format(tax) << endl
    << "Installment : " << format(installment) << endl
    << "Insurance  : " << format(insurance) << endl
    << "Net Salary  : " << format(net) << endl;
}

int run_main(){ 
    string name; cout << "Insert Name: "; getline( cin, name);
    long int gross = getInput("Insert Gross Salary: ");
    long int tax = gross * 0.2;
    long int installment = getInput("Insert Installment: ");
    long int insurance = getInput("Insert Insurance: ");
    long int net = gross - tax - installment - insurance;
    displayResult(name, gross, tax, installment, insurance, net); //Calls the displayResult function to display the formatted payslip using the gathered and calculated values.

    return 0;
}

int main(int argc, char* argv[]) {
    if (argc > 1 && std::string(argv[1]) == "test") {
        //do something
        return 0;
    }
    else
    {
        return run_main();
    }
}