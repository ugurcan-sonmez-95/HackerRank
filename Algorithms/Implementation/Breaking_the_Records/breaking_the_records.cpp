// Breaking the Records - Solution

#include <iostream>
#include <vector>

std::vector<int> breakingRecords(std::vector<int> scores) {
    std::vector<int> highest_lowest;
    int count_highest{}, count_lowest{};
    int max{scores[0]}, min{scores[0]};
    for (int i{1}; i < scores.size(); i++) {
        if (scores[i] > max) {
            max = scores[i];
            count_highest++;
        } 
        else if (scores[i] < min) {
            min = scores[i];
            count_lowest++;
        }
    }
    highest_lowest.push_back(count_highest);
    highest_lowest.push_back(count_lowest);
    return highest_lowest;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> scores;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        scores.push_back(val);
    }
    std::vector<int> result = breakingRecords(scores);
    for (int j{}; j < result.size(); j++) 
        std::cout << result[j] << " ";

    return 0;
}