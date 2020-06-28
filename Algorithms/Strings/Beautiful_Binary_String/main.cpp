// Beautiful Binary String - Solution

#include <iostream>

void beautifulBinaryString(std::string b) {
    int change_count{};
    for (int i{}; i < b.size()-2; i++) {
        if (b.substr(i, 3) == "010") {
            if (b[i+2] == '0')
                b[i+2] = '1';
            else
                b[i+2] = '0';
            change_count++;
        } 
    }
    std::cout << change_count;
}

int main() {
    int n;
    std::cin >> n;
    std::string b(n, ' ');
    std::cin >> b;
    beautifulBinaryString(b);

    return 0;
}