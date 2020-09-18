// Counting Sort 1 - Solution

#include <iostream>
#include <cstring>

void countingSort(const int n, const int arr[]) {
    int zeroArr[100];
    std::memset(zeroArr, 0, sizeof zeroArr);
    for (int i{}; i < n; i++)
        zeroArr[arr[i]]++;
    for (int j{}; j < 100; j++)
        std::cout << zeroArr[j] << " ";
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