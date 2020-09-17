// Designer PDF Viewer - Solution

#include <iostream>
#include <vector> 
#include <algorithm>

int designerPdfViewer(const std::vector<int> &h, const std::string &word) {
    int max{1};
    for (auto &c: word) 
        max = std::max(max, h[c - 'a']);
    const int area = max * word.size();
    return area;
}

int main() {
    std::vector<int> h(26);
    for (int i{}; i < h.size(); i++) 
        std::cin >> h[i];
    std::string word;
    std::cin >> word;
    const int result = designerPdfViewer(h, word);
    std::cout << result;

    return 0;
}