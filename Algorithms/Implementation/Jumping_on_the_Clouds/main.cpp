// Jumping on the Clouds - Solution

#include <iostream>
#include <vector>

int jumpingOnClouds(std::vector<int> c) {
    int count{};
    for (int i{}; i < c.size()-1; i++) {
        if (c[i+2] == 0) {
            count++;
            i++;
        } else 
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> c(n);
    for (int i{}; i < c.size(); i++) {
        std::cin >> c[i];
    }
    int result = jumpingOnClouds(c);
    std::cout << result;

    return 0;
}