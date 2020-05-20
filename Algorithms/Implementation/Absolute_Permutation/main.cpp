// Absolute Permutation - Solution

#include <iostream>
#include <vector>

std::vector<int> absolutePermutation(int n, int k) {
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

int main() {
    int t, n, k;
    std::cin >> t;
    while (t != 0) {
        std::cin >> n >> k;
        std::vector<int> result = absolutePermutation(n, k);
        for (auto el: result)
            std::cout << el << " ";
        std::cout << std::endl;
        t--;
    }
    return 0;
}