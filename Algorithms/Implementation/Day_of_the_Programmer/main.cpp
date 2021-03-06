// Day of the Programmer - Solution

#include <iostream>

std::string dayOfProgrammer(const int year) {
    const std::string s{std::to_string(year)};
    if (year == 1918) 
        return "26.09.1918";
    else if ((year < 1918) && (year%4 == 0)) 
        return "12.09." + s;
    else if (((year > 1918) && (year%400 == 0)) || ((year > 1918) && (year%4 == 0) && (year%100 != 0))) 
        return "12.09." + s;
    else 
        return "13.09." + s;
}

int main() {
    int year;
    std::cin >> year;
    const std::string result = dayOfProgrammer(year);
    std::cout << result;

    return 0;
}