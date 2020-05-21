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
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    int result = migratoryBirds(vec);
    std::cout << result;

    return 0;
}