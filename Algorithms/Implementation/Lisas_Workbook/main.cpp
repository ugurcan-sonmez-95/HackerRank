// Lisa's Workbook - Solution

#include <iostream> 
#include <vector>

int workbook(int n, int k, std::vector<int> vec) {
    int specials{}, pageNum{1};
    for (int i{1}; i <= n; i++) {
        for (int j{1}; j <= vec[i-1]; j++) {
            if (j == pageNum) 
                specials++;
            if (j % k == 0 || j == vec[i-1]) 
                pageNum++;
        }
    }
    return specials;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    int result = workbook(n, k, vec);
    std::cout << result;

    return 0;
}