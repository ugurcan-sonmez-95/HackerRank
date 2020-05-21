// Drawing Book - Solution

#include <iostream>
#include <algorithm>

int pageCount(int n, int p) {
    int totalPageCountFront {n/2}, targetPageCountFront {p/2};
    int targetPageCountBack {totalPageCountFront - targetPageCountFront};
    return std::min(targetPageCountFront, targetPageCountBack);
}

int main() {
    int n, p; 
    std::cin >> n >> p;
    int result = pageCount(n, p);
    std::cout << result;

    return 0;
}