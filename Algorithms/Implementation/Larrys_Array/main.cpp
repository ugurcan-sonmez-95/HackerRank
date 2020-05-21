// Larry's Array - Solution

#include <iostream>
#include <vector>

std::string larrysArray(std::vector<int> A) {
    int testCount{};
    for (int i{}; i < A.size()-1; i++) {
        for (int j{i+1}; j < A.size(); j++) {
            if (A[j] < A[i])
                testCount++;
        }
    }
    if (testCount % 2 == 0) 
        return "YES";
    return "NO";
}

int main() {
    int t, n;
    std::cin >> t;
    while (t != 0) {
        std::cin >> n;
        std::vector<int> A(n);
        for (int i{}; i < A.size(); i++) 
            std::cin >> A[i];
        std::string result = larrysArray(A);
        std::cout << result << '\n';
        t--;
    }
    return 0;
}