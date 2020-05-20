// Beautiful Triplets - Solution

#include <iostream>
#include <vector>

int beautifulTriplets(int d, std::vector<int> vec) {
    int count{};
    if (vec.size() < 3) 
        return 0;
    else {
        for (int i{}; i < vec.size()-2; i++) {
            for (int  j{i+1}; j < vec.size()-1; j++) {
                if (vec[j] - vec[i] == d) {
                    for (int k{j+1}; k < vec.size(); k++) {
                        if (vec[k] - vec[j] == d) 
                            count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int n, d;
    std::cin >> n >> d;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    int result = beautifulTriplets(d, vec);
    std::cout << result << std::endl;

    return 0;
}