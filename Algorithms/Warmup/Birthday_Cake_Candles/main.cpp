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
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    int result = birthdayCakeCandles(vec);
    std::cout << result;

    return 0;
}