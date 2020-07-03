// The Time in Words - Solution

#include <iostream>
#include <map>

std::map<int, std::string> timeDefs() {
    std::map<int, std::string> time;
    time[1] = "one";
    time[2] = "two";
    time[3] = "three";
    time[4] = "four";
    time[5] = "five";
    time[6] = "six";
    time[7] = "seven";
    time[8] = "eight";
    time[9] = "nine";
    time[10] = "ten";
    time[11] = "eleven";
    time[12] = "twelve";
    time[13] = "thirteen";
    time[14] = "fourteen";
    time[15] = "fifteen";
    time[16] = "sixteen";
    time[17] = "seventeen";
    time[18] = "eighteen";
    time[19] = "nineteen";
    time[20] = "twenty";
    time[21] = "twenty one";
    time[22] = "twenty two";
    time[23] = "twenty three";
    time[24] = "twenty four";
    time[25] = "twenty five";
    time[26] = "twenty six";
    time[27] = "twenty seven";
    time[28] = "twenty eight";
    time[29] = "twenty nine";
    return time;
}

void mainFunc(int h, int m) {
    std::string time_str;
    std::map<int, std::string> time = timeDefs();
    for (int i{1}; i <= 12; i++) {
        if (h == i && m == 0)
            time_str = time[i] + " o' clock";
        else if (h == i && m == 15)
            time_str = "quarter past " + time[i];
        else if (h == i && m == 30)
            time_str = "half past " + time[i];
        else if (h == i && m == 45)
            time_str = "quarter to " + time[i+1];
        else if (h == i && m == 1)
            time_str = "one minute past " + time[i];
        else if (h == i && m == 59)
            time_str = "one minute to " + time[i+1];
        else if (h == i && m < 30)
            time_str = time[m] + " minutes past " + time[i];
        else if (h == i && m > 30)
            time_str = time[60-m] + " minutes to " + time[i+1];  
    }
    std::cout << time_str;
}

int main() {
    int h, m;
    std::cin >> h >> m;
    mainFunc(h, m);

    return 0;
}