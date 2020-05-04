// Birthday Cake Candles - Solution

#include <iostream> 
#include <vector>
#include <algorithm>

int birthdayCakeCandles(std::vector<int> vec) {
    int count{};
    std::sort(vec.begin(), vec.end());
    for (int i{}; i < vec.size(); i++) {
        if (vec[i] == vec[vec.size()-1]) 
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    int result = birthdayCakeCandles(vec);
    std::cout << result << std::endl;

    return 0;
}