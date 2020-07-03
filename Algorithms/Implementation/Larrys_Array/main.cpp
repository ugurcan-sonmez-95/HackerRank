// Larry's Array - Solution

#include <iostream>
#include <vector>

std::string checkSorted(std::vector<int> A) {
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

void mainFunc(int t, int n) {
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::vector<int> A(n);
        for (int i{}; i < A.size(); i++)
            std::cin >> A[i];
        std::string result = checkSorted(A);
        std::cout << result << '\n';
        t--;
    }
}

int main() {
    int t, n;
    mainFunc(t, n);

    return 0;
}