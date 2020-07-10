// Counting Sort 2 - Solution

#include <iostream>
#include <cstring>

void countingSort(int n, int arr[]) {
    int zeroArr[100];
    std::memset(zeroArr, 0, sizeof zeroArr);
    for (int i{}; i < n; i++)
        zeroArr[arr[i]]++;
    for (int j{}; j < 100; j++) {
        if (zeroArr[j] != 0) 
            for (int k{}; k < zeroArr[j]; k++)
                std::cout << j << " ";
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i{}; i < n; i++)
        std::cin >> arr[i];
    countingSort(n, arr);

    return 0;
}