#include <iostream>
#include <vector>

// Function to merge two sorted arrays
std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    // Copy remaining elements from arr2 (if any)
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8};

    std::vector<int> merged = mergeSortedArrays(arr1, arr2);

    std::cout << "Merged Array: ";
    for (int num : merged) {
        std::cout << num << " ";
    }

    return 0;
}
