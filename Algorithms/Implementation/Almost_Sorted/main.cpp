// Almost Sorted - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void almostSorted(std::vector<int> vec) {
    std::vector<int> v1 = vec;
    std::sort(v1.begin(), v1.end());
    std::vector<int> v2 = v1;
    for (int i{}; i < vec.size(); i++) {
        if (std::find(vec.begin(), vec.end(), v2[0]) == vec.begin() + i)
            v2.erase(v2.begin());
        else {
            int el = std::find(vec.begin(), vec.end(), v2[0]) - vec.begin();
            std::swap(vec[i], vec[el]);
            if (vec == v1) {
                std::cout << "yes" << "\n" << "swap " << i+1 << " " << el+1;
                break;
            }
            else {
                std::swap(vec[i], vec[el]);
                std::reverse(vec.begin()+i, vec.begin()+el+1);
                if (vec == v1) {
                    std::cout << "yes" << "\n" << "reverse " << i+1 << " " << el+1;
                    break;
                }
                else {
                    std::cout << "no"; 
                    break;
                }
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++)  
        std::cin >> vec[i];
    almostSorted(vec);

    return 0;
}