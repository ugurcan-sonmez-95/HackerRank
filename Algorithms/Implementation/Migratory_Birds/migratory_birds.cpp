// Migratory Birds - Solution

#include <iostream>
#include <vector> 
#include <map> 

int migratoryBirds(std::vector<int> vec) {
    std::map<int,int> m;
    for (auto el: vec) 
        m[el]++;
    auto it = m.begin();
    int id{it->first}, max{it->second};
    while (it != m.end()) {
        if (max < it->second) {
            max = it->second;
            id = it->first;
        }
        it++;
    }
    return id;
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
    int result = migratoryBirds(vec);
    std::cout << result << std::endl;

    return 0;
}