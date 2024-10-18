#include <iostream>
#include <string>

//struct declaration 
struct fullname {
    std::string FirstName;
    std::string LastName;
};

struct StudentRec {
    fullname name;
    std::string idNum;
    float GPA;
};

//variable declaration and initialization
StudentRec theStudent[10];

//process
int main () {
    int n, i; //declaration for n and i

    std::cout << "Enter the number of student : " << std::endl;
    std::cin >> n;
    std::cout << "----- Student data -----" << std::endl;
    for (i = 0; i < n; ++i) {
        std::cout << "First Name : ";
        std::cin >> theStudent[i].name.FirstName;

        std::cout << "Last Name : ";
        std::cin >> theStudent[i].name.LastName;

        std::cout << "Student ID Number : ";
        std::cin >> theStudent[i].idNum;

        std::cout << "GPA : ";
        std::cin >> theStudent[i].GPA;
        }

//finalization
    std::cout << "Student Data" << std::endl;
    for (i=0; i<n; i++) {
        std::cout << theStudent[i].name.FirstName << " ";
        std::cout << theStudent[i].name.LastName << std::endl;
        std::cout << theStudent[i].idNum << std::endl;
        std::cout << theStudent[i].GPA << std::endl;
    }
    std::cout << "Press Enter to continue.";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}