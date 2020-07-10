// Correctness and the Loop Invariant - Solution

#include <iostream>

void insertionSort(int N, int arr[]) {
    int j, value;
    for (int i{1}; i < N; i++) {
        value = arr[i];
        j = i-1;
        while (j >= 0 && value < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
    }
    for (int k; k < N; k++)
        std::cout << arr[k] << " ";
}
int main () {
    int N;
    std::cin >> N;
    int arr[N];
    for (int i{}; i < N; i++) 
        std::cin >> arr[i];
    insertionSort(N, arr);

    return 0;
}