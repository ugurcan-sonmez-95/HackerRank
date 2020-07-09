// Intro to Tutorial Challenges - Solution

#include <iostream>
#include <vector>

void introTutorial(int V, std::vector<int> vec) {
    for (int i{}; i < vec.size(); i++) {
        if (vec[i] == V) {
            std::cout << i; 
            break;
        }
    } 
}

int main() {
    int V, n;
    std::cin >> V >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++)
        std::cin >> vec[i];
    introTutorial(V, vec);

    return 0;
}