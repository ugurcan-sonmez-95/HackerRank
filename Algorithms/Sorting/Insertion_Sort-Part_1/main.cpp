// Insertion Sort - Part 1 - Solution

#include <iostream>

void printVector(int n, int arr[]) {
    for (int i{}; i < n; i++) 
        std::cout << arr[i] << " ";
    std::cout << '\n';
}

void insertionSort1(int n, int arr[]) {
    int num {arr[n-1]};
    for (int i{n-2}; i >= 0; i--) {
        if (num <= arr[i]) {
            arr[i+1] = arr[i];
            printVector(n, arr);
            if (i == 0) {
                arr[i] = num;
                printVector(n, arr);
            }
        }
        else {
            arr[i+1] = num;
            printVector(n, arr);
            break;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i{}; i < n; i++)
        std::cin >> arr[i];
    insertionSort1(n, arr);

    return 0;
}