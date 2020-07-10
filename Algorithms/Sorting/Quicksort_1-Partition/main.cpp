// Quicksort 1 - Partition - Solution

#include <iostream>

void quickSort(int n, int arr[]) {
    int pivotNum{arr[0]}, temp;
    for (int i{1}; i < n; i++) {
        if (pivotNum > arr[i]) {
            for (int j{i}; j > 0; j--) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for (int k{}; k < n; k++)
        std::cout << arr[k] << " ";
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i{}; i < n; i++) 
        std::cin >> arr[i];
    quickSort(n, arr);

    return 0;
}