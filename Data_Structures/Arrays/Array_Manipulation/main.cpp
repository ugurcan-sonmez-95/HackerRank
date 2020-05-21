// Array Manipulation - Solution

#include <iostream>
#include <vector>

long arrayManipulation(long n, std::vector<std::vector<long>> queries) {
    std::vector<long> nums(n+1);
    long max{}, tmp{};
    for (long i{}; i < queries.size(); i++) {
        long a = queries[i][0], b = queries[i][1], k = queries[i][2];
        nums[a] += k;
        if ((b+1) <= n)
            nums[b+1] -= k;
    }
    for (long j{}; j < nums.size(); j++) {
        tmp += nums[j];
        if (tmp > max)
            max = tmp;
    }
    return max;
}

int main() {
    long n, m;
    std::cin >> n >> m;
    std::vector<std::vector<long>> queries(m);
    long val;
    for (long i{}; i < queries.size(); i++) {
        for (long j{}; j < 3; j++) {
            std::cin >> val;
            queries[i].push_back(val);
        }
    }
    long result = arrayManipulation(n, queries);
    std::cout << result;

    return 0;
}