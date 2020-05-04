// Designer PDF Viewer - Solution

#include <iostream>
#include <vector> 
#include <algorithm>

int designerPdfViewer(std::vector<int> h, std::string word) {
    int max{1};
    for (auto c: word) 
        max = std::max(max, h[c - 'a']);
    int area = max * word.size();
    return area;
}

int main() {
    std::vector<int> h;
    int val;
    for (int i{}; i < 26; i++) {
        std::cin >> val;
        h.push_back(val);
    }
    std::string word;
    std::cin >> word;
    int result = designerPdfViewer(h, word);
    std::cout << result << std::endl;

    return 0;
}