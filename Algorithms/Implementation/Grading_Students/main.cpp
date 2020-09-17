// Grading Students - Solution

#include <iostream> 
#include <vector>

std::vector<int> gradingStudents(const std::vector<int> &grades) {
    std::vector<int> new_grades;
    for (auto &grade: grades)
        (grade < 38 || (5 - grade%5) >= 3) ? new_grades.push_back(grade) : new_grades.push_back(grade + (5 - grade%5));
    return new_grades;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> grades(n);
    for (int i{}; i < grades.size(); i++) 
        std::cin >> grades[i];
    const std::vector<int> result = gradingStudents(grades);
    for (auto &el: result) 
        std::cout << el << '\n';

    return 0;
}