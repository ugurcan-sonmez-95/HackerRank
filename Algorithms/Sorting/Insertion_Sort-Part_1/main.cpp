// Insertion Sort - Part 1 - Solution

#include <iostream>
#include <vector>

void printVector(std::vector<int> vec) {
    for (auto num: vec)
        std::cout << num << " ";
    std::cout << '\n';
}

void insertionSort1(std::vector<int> vec) {
    int num {vec[vec.size()-1]};
    for (int i{vec.size()-2}; i >= 0; i--) {
        if (num <= vec[i]) {
            vec[i+1] = vec[i];
            printVector(vec);
            if (i == 0) {
                vec[i] = num;
                printVector(vec);
            }
        }
        else {
            vec[i+1] = num;
            printVector(vec);
            break;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++)
        std::cin >> vec[i];
    insertionSort1(vec);

    return 0;
}