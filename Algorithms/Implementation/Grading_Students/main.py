### Grading Students - Solution

def gradingStudents(grades):
    for grade in grades:
        if (grade < 38 or grade % 5 < 3):
            print(grade)
        else:
            print((grade+5) - (grade%5))

num_of_studs = int(input())
grades = [int(input()) for _ in range(num_of_studs)]
gradingStudents(grades)