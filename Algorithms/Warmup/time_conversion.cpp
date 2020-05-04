// Time Conversion - Solution

#include <iostream>
#include <iomanip>

int main() {
    int h, m, s;
    char c, apm;
    std::cin >> h >> c >> m >> c >> s >> apm >> c;
    h = (apm == 'A') ? (h == 12 ? 0 : h) : (h == 12 ? 12 : h+12);
    std::cout << std::setw(2) << std::setfill('0') << h << ':'
              << std::setw(2) << std::setfill('0') << m << ':'
              << std::setw(2) << std::setfill('0') << s << std::endl; 

    return 0;
}