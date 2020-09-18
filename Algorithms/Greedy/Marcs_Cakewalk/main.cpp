// Marc's Cakewalk - Solution

#include <iostream>  
#include <vector>
#include <algorithm>
#include <cmath>

void marcsCakewalk(std::vector<int> &calorie) {
    std::sort(calorie.rbegin(), calorie.rend());
    long sum {};
    for (int i{}; i < calorie.size(); i++)
        sum += std::pow(2, i) * calorie[i];
    std::cout << sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> calorie(n);
    for (int i{}; i < calorie.size(); i++)
        std::cin >> calorie[i];
    marcsCakewalk(calorie);

    return 0;
}