#include <iostream>
#include <vector>

// Function to perform Selection Sort on a vector of integers
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++) {
        // Assume the current position contains the smallest element
        int min_idx = i;

        // Find the minimum element in the unsorted subarray
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update min_idx if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted subarray
        if (min_idx != i) { // Only swap if a smaller element was found
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// Function to print the elements of the array
void printArray(const std::vector<int>& arr) {
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Initialize an array of integers
    std::vector<int> data = {64, 25, 12, 22, 11};

    std::cout << "Original array:\n";
    printArray(data);

    // Perform Selection Sort
    selectionSort(data);

    std::cout << "Sorted array:\n";
    printArray(data);

    return 0;
}
