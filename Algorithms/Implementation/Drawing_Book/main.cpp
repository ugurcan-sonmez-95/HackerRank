// Drawing Book - Solution

#include <iostream>
#include <algorithm>

int pageCount(const int n, const int p) {
    const int totalPageCountFront {n/2}, targetPageCountFront {p/2};
    const int targetPageCountBack {totalPageCountFront - targetPageCountFront};
    return std::min(targetPageCountFront, targetPageCountBack);
}

int main() {
    int n, p; 
    std::cin >> n >> p;
    const int result = pageCount(n, p);
    std::cout << result;

    return 0;
}