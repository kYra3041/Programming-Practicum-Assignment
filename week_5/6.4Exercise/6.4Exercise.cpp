#include <iostream>
#include <iomanip>

//struct declaration
struct Student {
    int idNum;
    float midtermExam;
    float finalExam;
    float average;
};
//variable declaration and initialization
Student student [50];

//main process
int main () {
    int n,i;

    std::cout << "Enter the number of students : ";
    std::cin >> n;
    for (i=0; i<n; i++) {
        std::cout << "Enter the NIM : ";
        std::cin >> student[i].idNum;

        std::cout << "Enter UTS value : ";
        std::cin >> student[i].midtermExam;

        std::cout << "Enter UAS value : ";
        std::cin >> student[i].finalExam;
        
        //calculate the average
        student[i].average = (student[i].midtermExam + student[i].finalExam) / 2.0f;
    }

    //display the result to user
    std::cout << "\n";
    for (i=0; i<n; i++) {
        std::cout << "------\n";
        std::cout << "nim : " << student[i].idNum;
        std::cout << "average : " << std::fixed << std::setprecision(2) << student[i].average << "\n";
    }

    
    // Pause mechanism
    std::cout << "\nPress Enter to continue.";
    std::cin.ignore();
    std::cin.get();

    return 0;
}