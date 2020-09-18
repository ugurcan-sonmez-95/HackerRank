// Insertion Sort - Part 2 - Solution

#include <iostream>

void printVector(const int n, const int nums[]) {
    for (int i{}; i < n; i++)
        std::cout << nums[i] << " ";
    std::cout << '\n';
}

void insertionSort2(const int n, int nums[]) {
    int cmp, prev;
    for (int i{1}; i < n; i++) {
        cmp = nums[i]; 
        prev = i-1;
        while (prev >= 0 && nums[prev] > cmp) {
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = cmp;
        printVector(n, nums);
    }
}

int main() {
    int n;
    std::cin >> n;
    int nums[n];
    for (int i{}; i < n; i++)
        std::cin >> nums[i];
    insertionSort2(n, nums);

    return 0;
}