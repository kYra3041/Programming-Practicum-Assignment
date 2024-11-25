#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    
    // Input size of first list
    cout << "Enter how many values will be in the first sorted list: ";
    cin >> size1;
    
    // Create and input first list
    int list1[size1];
    cout << "Enter " << size1 << " numbers in sorted order:\n";
    for(int i = 0; i < size1; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> list1[i];
    }
    
    // Input size of second list
    cout << "\nEnter how many values will be in the second sorted list: ";
    cin >> size2;
    
    // Create and input second list
    int list2[size2];
    cout << "Enter " << size2 << " numbers in sorted order:\n";
    for(int i = 0; i < size2; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> list2[i];
    }
    
    // Create merged array
    int mergedList[size1 + size2];
    int i = 0, j = 0, k = 0;
    
    // Merge while both lists have elements
    while(i < size1 && j < size2) {
        if(list1[i] <= list2[j]) {
            mergedList[k] = list1[i];
            i++;
        } else {
            mergedList[k] = list2[j];
            j++;
        }
        k++;
    }
    
    // Add remaining elements from list1 if any
    while(i < size1) {
        mergedList[k] = list1[i];
        i++;
        k++;
    }
    
    // Add remaining elements from list2 if any
    while(j < size2) {
        mergedList[k] = list2[j];
        j++;
        k++;
    }
    
    // Output merged list
    cout << "\nMerged sorted list is:\n";
    for(int i = 0; i < size1 + size2; i++) {
        cout << mergedList[i] << " ";
    }
    cout << endl;
    
    return 0;
}