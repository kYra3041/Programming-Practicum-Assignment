#include <iostream>
#include <string>

struct Student {
    std::string nisn;
    std::string name;
    int value;
};

// function to print single student data
void printStudent(const Student& student){
    std::cout << student.nisn << " " << student.name << " " << student.value << std::endl;
}

// function to print the array
void printArray(Student arr[], int n) {
    for(int i = 0; i < n; i++) {
        printStudent(arr[i]);
    }
    std::cout << std::endl;
}

// Insertion Sort by NISN (needed for binary search)
void insertionSortNISN(Student arr[], int n) {
    for(int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j].nisn > key.nisn) { //changed to ascending order for binary search
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Binary Search by NISN
int binarySearchNISN(Student arr[], int left, int right, const std::string& targetNISN) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid].nisn == targetNISN)
            return mid;

        if (arr[mid].nisn < targetNISN)
            left = mid +1;
        else 
            right = mid - 1;
    }
    return -1;
}

// Sequential Search to update names for students with value 60
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

int main() {
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

    // 2. Binary Search for NISN 9950310962
    std::cout << "Number 2: Binary Search for NISN 9950310962" << std::endl;
    std::cout << "Original array:" << std::endl;
    printArray(students, n);
    
    // Sort array by NISN first (binary search requires sorted array)
    insertionSortNISN(students, n);
    std::cout << "Sorted array by NISN:" << std::endl;
    printArray(students, n);
    
    std::string targetNISN = "9950310962";
    int result = binarySearchNISN(students, 0, n-1, targetNISN);
    
    if (result != -1) {
        std::cout << "Found student with NISN " << targetNISN << ":" << std::endl;
        printStudent(students[result]);
    } else {
        std::cout << "Student with NISN " << targetNISN << " not found." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    // 3. Sequential Search and Update names where value is 60
    std::cout << "Number 3: Update names where value is 60" << std::endl;
    std::cout << "Before update:" << std::endl;
    printArray(students, n);
    
    updateNamesByValue(students, n, 60, "Joko");
    
    std::cout << "After update:" << std::endl;
    printArray(students, n);

    return 0;
}
