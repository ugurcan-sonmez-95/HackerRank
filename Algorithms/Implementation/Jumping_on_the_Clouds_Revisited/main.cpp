// Jumping on the Clouds: Revisited - Solution

#include <iostream>
#include <vector>

int jumpingOnClouds(std::vector<int> c, int k) {
    int e{100}, i = c.size();
    while (i != 0) {
        i = (i+k) % c.size();
        if (c[i] == 0) 
            e--;
        else 
            e -= 3;
    }
    return e;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> c(n);
    for (int i{}; i < n; i++) {
        std::cin >> c[i];
    }
    int result = jumpingOnClouds(c, k);
    std::cout << result;

    return 0;
}