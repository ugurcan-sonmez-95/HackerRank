// Picking Numbers - Solution

#include <iostream>
#include <vector>

int pickingNumbers(std::vector<int> a) {
    int arr[101] = {0}, max{0};
    for (int i{}; i < a.size(); i++) 
        arr[a[i]]++;
    for (int j{}; j < 100; j++) {
        int sum{arr[j] + arr[j+1]};
        if (sum > max) 
            max = sum;
    }
    return max;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i{}; i < a.size(); i++) {
        std::cin >> a[i];
    }
    int result = pickingNumbers(a);
    std::cout << result << std::endl;

    return 0;
}