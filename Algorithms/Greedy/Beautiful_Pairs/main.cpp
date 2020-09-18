// Beautiful Pairs - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void beautifulPairs(const std::vector<int> &A, std::vector<int> &B) {
    int count{};
    for (auto &num: A) {
        auto find = std::find(B.begin(), B.end(), num);
        if (find != B.end()) {
            B.erase(find);
            count++;
        }
    }
    count < A.size() ? count++ : count--;
    std::cout << count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> A(n), B(n);
    for (int i{}; i < A.size(); i++)
        std::cin >> A[i];
    for (int j{}; j < B.size(); j++)
        std::cin >> B[j];
    beautifulPairs(A, B);

    return 0;
}