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
    std::vector<int> h(26);
    for (int i{}; i < h.size(); i++) {
        std::cin >> h[i];
    }
    std::string word;
    std::cin >> word;
    int result = designerPdfViewer(h, word);
    std::cout << result << std::endl;

    return 0;
}