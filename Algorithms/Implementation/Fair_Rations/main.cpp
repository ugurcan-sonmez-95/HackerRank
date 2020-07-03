// Fair Rations - Solution

#include <iostream>
#include <vector>
#include <string>

std::string fairRations(std::vector<int> B) {
    int oddNum{};
    for (int i{}; i < B.size(); i++) {
        if (B[i] % 2 != 0) 
            oddNum++;
    }
    if (oddNum % 2 != 0) 
        return "NO";
    else {
        int count{};
        for (int j{}; j < B.size()-1; j++) {
            if (B[j] % 2 != 0) {
            B[j] += 1;
            B[j+1] += 1;
            count += 2;
            }
        }
        std::string strNum{std::to_string(count)};
        return strNum;    
    }
}

int main() {
    int N; 
    std::cin >> N;
    std::vector<int> B(N);
    for (int i{}; i < B.size(); i++) 
        std::cin >> B[i];
    std::string result = fairRations(B);
    std::cout << result;

    return 0;
}