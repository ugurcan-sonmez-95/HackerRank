// Taum and B'day - Solution

#include <iostream>

long taumBday(int b, int w, int bc, int wc, int z) {
    long newBC{bc}, newWC{wc}, minCost;
    if (wc > bc + z) 
        newWC = bc + z;
    else if (bc > wc + z) 
        newBC = wc + z;
    minCost = long(newBC * b) + long(newWC * w);
    return minCost;
}

int main() {
    int t;
    std::cin >> t;
    int b, w, bc, wc, z;
    while (t != 0) {
        std::cin >> b >> w >> bc >> wc >> z;
        long result = taumBday(b, w, bc, wc, z);
        std::cout << result << std::endl;
        t--;
    }
    return 0;
}