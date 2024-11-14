#include <iostream>
#include <string>
#include <cassert>

// Structure to store student data
struct Student {
    std::string nisn;
    std::string name;
    int value;
};

// Function to print student data
void printArray(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i].nisn << " " << arr[i].name << " " << arr[i].value << std::endl;
    }
    std::cout << std::endl;
}

// Insertion sort by NISN
void insertionSortNISN(Student arr[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].nisn < key.nisn) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Insertion Sort by Value
void insertionSortValue(Student arr[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].value < key.value) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort by NISN
void selectionSortNISN(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].nisn > arr[maxIdx].nisn)
                maxIdx = j;
        }
        Student temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}

// Selection Sort by Value
void selectionSortValue(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].value > arr[maxIdx].value)
                maxIdx = j;
        }
        Student temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort by NISN
void bubbleSortNISN(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j].nisn < arr[j + 1].nisn) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort by Value
void bubbleSortValue(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j].value < arr[j + 1].value) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Test functions for sorting by NISN and Value
void testSortByNISN() {
    Student students[] = {
        {"9950310962", "Ronaldo", 80},
        {"9970272750", "Achmad", 60},
        {"9960312699", "Handi", 90}
    };
    int n = 3;

    insertionSortNISN(students, n);
    assert(students[0].nisn == "9970272750");
    assert(students[1].nisn == "9960312699");
    assert(students[2].nisn == "9950310962");

    std::cout << "testSortByNISN passed!" << std::endl;
}

void testSortByValue() {
    Student students[] = {
        {"9960312699", "Handi", 90},
        {"9970293945", "Alivia", 70},
        {"9950310962", "Ronaldo", 80}
    };
    int n = 3;

    insertionSortValue(students, n);
    assert(students[0].value == 90);
    assert(students[1].value == 80);
    assert(students[2].value == 70);

    std::cout << "testSortByValue passed!" << std::endl;
}

int main() {
    // Run the test functions
    testSortByNISN();
    testSortByValue();

    std::cout << "All tests passed!" << std::endl;
    return 0;
}