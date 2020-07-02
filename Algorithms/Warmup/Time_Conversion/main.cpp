// Time Conversion - Solution

#include <iostream>
#include <iomanip>

void timeConversion(int h, int m, int s, char c, char apm) {
    std::cin >> h >> c >> m >> c >> s >> apm >> c;
    h = (apm == 'A') ? (h == 12 ? 0 : h) : (h == 12 ? 12 : h+12);
    std::cout << std::setw(2) << std::setfill('0') << h << ':'
              << std::setw(2) << std::setfill('0') << m << ':'
              << std::setw(2) << std::setfill('0') << s << '\n'; 
}

int main() {
    int h, m, s;
    char c, apm;
    timeConversion(h, m, s, c, apm);

    return 0;
}