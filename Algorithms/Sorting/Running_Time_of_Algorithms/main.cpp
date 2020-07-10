// Running Time of Algorithms - Solution

#include <iostream>

void runningTime(int n, int arr[]) {
    int cmp, prev, shiftCount{};
    for (int i{1}; i < n; i++) {
        cmp = arr[i];
        prev = i-1;
        while (prev >= 0 && arr[prev] > cmp) {
            arr[prev+1] = arr[prev];
            prev--;
            shiftCount++;
        }
        arr[prev+1] = cmp;
    }
    std::cout << shiftCount;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i{}; i < n; i++)
        std::cin >> arr[i];
    runningTime(n, arr);

    return 0;
}