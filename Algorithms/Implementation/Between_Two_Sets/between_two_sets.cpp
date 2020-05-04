// Between Two Sets - Solution

#include <iostream>
#include <vector>

int gcd(int a, int b) {
    if (a == 0) 
        return b;
    return gcd(b%a,a);
}

int lcm(int a, int b) {
    return ((a*b) / gcd(a,b));
}

int getTotalX(std::vector<int> a, std::vector<int> b) {
    int l{a[0]};
    int n1 = a.size(), n2 = b.size();
    for (int i{1}; i < n1; i++) 
        l = lcm(l, a[i]);
    int g{b[0]};
    for (int i{1}; i < n2; i++)
        g = gcd(g, b[i]);
    int m{b[0]};
    for (auto x: b) {
        if (x > m) 
            m = x;
    }
    int k{m/l}, count{};
    for (int i{1}; i <= k; i++) {
        if (g % (i*l) == 0) 
            count++;
    }
    return count;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a, b;
    int val1; 
    for (int i{}; i < n; i++) {
        std::cin >> val1;
        a.push_back(val1);
    }
    int val2;
    for (int j{}; j < m; j++) {
        std::cin >> val2;
        b.push_back(val2);
    }
    int result = getTotalX(a, b);
    std::cout << result << std::endl;

    return 0;
}