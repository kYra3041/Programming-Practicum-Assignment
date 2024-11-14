#include <iostream>
#include <cassert>
#include <string>

// Reuse the existing functions from your original file
struct Student {
    std::string nisn;
    std::string name;
    int value;
};

void printStudent(const Student& student) {
    std::cout << student.nisn << " " << student.name << " " << student.value << std::endl;
}

void printArray(Student arr[], int n) {
    for(int i = 0; i < n; i++) {
        printStudent(arr[i]);
    }
    std::cout << std::endl;
}

void insertionSortNISN(Student arr[], int n) {
    for(int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j].nisn > key.nisn) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int binarySearchNISN(Student arr[], int left, int right, const std::string& targetNISN) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].nisn == targetNISN)
            return mid;
        if (arr[mid].nisn < targetNISN)
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1;
}

void updateNamesByValue(Student arr[], int n, int targetValue, const std::string& newName) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].value == targetValue) {
            arr[i].name = newName;
            count++;
        }
    }
    std::cout << "Updated " << count << " record(s) with value " << targetValue << " to name '" << newName << "'" << std::endl;
}

// Test function for Insertion Sort by NISN
void testInsertionSortNISN() {
    Student students[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = 7;

    insertionSortNISN(students, n);

    // Check if the array is sorted by NISN
    for (int i = 1; i < n; i++) {
        assert(students[i-1].nisn <= students[i].nisn && "NISN not sorted properly");
    }

    std::cout << "Insertion Sort Test Passed!" << std::endl;
}

// Test function for Binary Search by NISN
void testBinarySearchNISN() {
    Student students[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = 7;

    // Sort array by NISN first (binary search requires sorted array)
    insertionSortNISN(students, n);

    std::string targetNISN = "9950310962";
    int result = binarySearchNISN(students, 0, n-1, targetNISN);
    assert(result != -1 && "Student not found during binary search");

    std::cout << "Binary Search Test Passed!" << std::endl;
}

// Test function for Sequential Search and Update
void testUpdateNamesByValue() {
    Student students[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = 7;

    updateNamesByValue(students, n, 60, "Joko");

    // Check if the names of students with value 60 are updated to "Joko"
    for (int i = 0; i < n; i++) {
        if (students[i].value == 60) {
            assert(students[i].name == "Joko" && "Name not updated correctly");
        }
    }

    std::cout << "Update Names Test Passed!" << std::endl;
}

int main() {
    // Run all tests
    testInsertionSortNISN();
    testBinarySearchNISN();
    testUpdateNamesByValue();

    std::cout << "All Tests Passed!" << std::endl;

    return 0;
}
