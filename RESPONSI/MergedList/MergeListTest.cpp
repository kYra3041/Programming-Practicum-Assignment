#include <iostream>
#include <cassert>
#include <vector>

void mergeSortedLists(const std::vector<int>& list1, const std::vector<int>& list2, std::vector<int>& mergedList) {
    size_t i = 0, j = 0, k = 0;
    mergedList.resize(list1.size() + list2.size());

    while (i < list1.size() && j < list2.size()) {
        if (list1[i] <= list2[j]) {
            mergedList[k++] = list1[i++];
        } else {
            mergedList[k++] = list2[j++];
        }
    }

    while (i < list1.size()) {
        mergedList[k++] = list1[i++];
    }

    while (j < list2.size()) {
        mergedList[k++] = list2[j++];
    }
}

void testMergeSortedLists() {
    std::vector<int> list1 = {1, 3, 5};
    std::vector<int> list2 = {2, 4, 6};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    std::vector<int> mergedList;

    mergeSortedLists(list1, list2, mergedList);
    assert(mergedList == expected);

    std::cout << "Test 1 passed!" << std::endl;

    list1 = {0, 2, 4};
    list2 = {1, 3, 5};
    expected = {0, 1, 2, 3, 4, 5};
    mergeSortedLists(list1, list2, mergedList);
    assert(mergedList == expected);

    std::cout << "Test 2 passed!" << std::endl;

    list1 = {};
    list2 = {1, 2, 3};
    expected = {1, 2, 3};
    mergeSortedLists(list1, list2, mergedList);
    assert(mergedList == expected);

    std::cout << "Test 3 passed!" << std::endl;

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testMergeSortedLists();
    return 0;
}
