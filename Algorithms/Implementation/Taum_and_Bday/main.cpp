// Taum and B'day - Solution

#include <iostream>

void taumBday(int t, int b, int w, int bc, int wc, int z) {
    std::cin >> t;
    while (t) {
        std::cin >> b >> w >> bc >> wc >> z;
        long newBC{bc}, newWC{wc}, minCost;
        if (wc > bc + z) 
            newWC = bc + z;
        else if (bc > wc + z) 
            newBC = wc + z;
        minCost = long(newBC * b) + long(newWC * w);
        std::cout << minCost << '\n';
        t--;
    }
}

int main() {
    int t, b, w, bc, wc, z;
    taumBday(t, b, w, bc, wc, z);

    return 0;
}