// Between Two Sets - Solution

#include <iostream>
#include <vector>

int gcd(const int a, const int b) {
    if (a == 0) 
        return b;
    return gcd(b%a,a);
}

int lcm(const int a, const int b) {
    return ((a*b) / gcd(a,b));
}

int getTotalX(const std::vector<int> &a, const std::vector<int> &b) {
    int l{a[0]};
    const int n1 = a.size(), n2 = b.size();
    for (int i{1}; i < n1; i++) 
        l = lcm(l, a[i]);
    int g{b[0]};
    for (int i{1}; i < n2; i++)
        g = gcd(g, b[i]);
    int m{b[0]};
    for (auto &x: b) 
        if (x > m) 
            m = x;
    const int k{m/l};
    int count{};
    for (int i{1}; i <= k; i++) 
        if (g % (i*l) == 0) 
            count++;
    return count;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    for (int i{}; i < a.size(); i++) 
        std::cin >> a[i];
    for (int j{}; j < b.size(); j++) 
        std::cin >> b[j];
    const int result = getTotalX(a, b);
    std::cout << result;

    return 0;
}