// Absolute Permutation - Solution

#include <iostream>
#include <vector>

std::vector<int> smallestAbsolutePermutation(int n, int k) {
    std::vector<int> perm;
    if (k == 0) {
        for (int i{1}; i <= n; i++)
            perm.push_back(i);
    } 
    else if (n % (k*2) != 0)
        perm.push_back(-1);
    else {
        bool boolCheck = true;
        for (int j{1}; j <= n; j++) {
            if (boolCheck)
                perm.push_back(j+k);
            else
                perm.push_back(j-k);
            if (j % k == 0) {
                if (boolCheck)
                    boolCheck = false;
                else
                    boolCheck = true; 
            } 
        }
    }
    return perm;
}

void outputResult(int t, int n, int k) {
    std::cin >> t;
    while (t) {
        std::cin >> n >> k;
        std::vector<int> result = smallestAbsolutePermutation(n, k);
        for (auto el: result)
            std::cout << el << " ";
        std::cout << '\n';
        t--;
    }
}

int main() {
    int t, n, k;
    outputResult(t, n, k);
    
    return 0;
}