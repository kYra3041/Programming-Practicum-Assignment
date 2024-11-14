#include <iostream>
#include <string>

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
void insertionSortNISN (Student arr[], int n) {
    for(int i=1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j].nisn < key.nisn) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Insertion Sort by Value
void insertionSortValue(Student arr[], int n) {
    for(int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while(j >= 1 && arr[j].value < key.value) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort by NISN
void selectionSortNISN(Student arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int maxIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j].nisn > arr[maxIdx].nisn)
            maxIdx = j;
        }
        Student temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}

// Selection Sort by Value
void selectionSortValue(Student arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int maxIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j].value > arr[maxIdx].value)
            maxIdx = j;
        }
        Student temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort by NISN
void bubbleSortNISN(Student arr[], int n) {
    for(int i = 0; i < n-1; i++) {
       for(int j = 0; j < n-1; j++) {
        if(arr[j].nisn < arr[j+1].nisn) {
            Student temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
       } 
    }
}

// Bubble Sort by Value
void bubbleSortValue(Student arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < j-1; j++) {
                    if(arr[j].value < arr[j+1].value) {
            Student temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

int main () {
    Student students[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60},
    };
    int n = 7;

    // Create copies of the original array for different sorts
    Student insertionArr[7], selectionArr[7], bubbleArr[7];
    for(int i = 0; i < n; i++) {
        insertionArr[i] = students[i];
        selectionArr[i] = students[i];
        bubbleArr[i] = students[i];
    }

    std::cout << "Sorting by NISN (Descending): " << std::endl;
    std::cout << "\nInsertion Sort: " << std::endl;
    insertionSortNISN(insertionArr, n);
    printArray(insertionArr, n);

    std::cout << "Selection Sort: " << std::endl;
    selectionSortNISN(selectionArr, n);
    printArray(selectionArr, n);

    std::cout << "Bubble Sort: " << std::endl;
    bubbleSortNISN(bubbleArr, n);
    printArray(bubbleArr,n);

    // Reset arrays for value sorting
    for(int i = 0; i < n; i++) {
        insertionArr[i] = students[i];
        selectionArr[i] = students[i];
        bubbleArr[i] = students[i];
    }
    std::cout << "-------------------------------------------------------------" << std::endl;

    std::cout << "\nSorting by Value (Descending): " << std::endl;
    std::cout << "\nInsertion Sort: " << std::endl;
    insertionSortValue(insertionArr, n);
    printArray(insertionArr, n);

    std::cout << "Selection Sort: " << std::endl;
    selectionSortValue(selectionArr, n);
    printArray(selectionArr, n);

    std::cout << "Bubble Sort: " << std::endl;
    bubbleSortValue(bubbleArr, n);
    printArray(bubbleArr, n);

    return 0;
}

