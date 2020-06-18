### Two Characters - Solution

def validate(check_valid):
    for i in range(len(check_valid)-1):
        if (check_valid[i] == check_valid[i+1]):
            return False
    return True

def main(s):
    max_size = 0
    unique_chars = set(s)
    list_of_uniques = list(unique_chars)
    for i in range(len(list_of_uniques)):
        for j in range(i+1, len(list_of_uniques)):
            check_valid = []
            for ch in s:
                if ((ch == list_of_uniques[i]) or (ch == list_of_uniques[j])):
                    check_valid.append(ch)
            if (validate(check_valid)):
                max_size = max(max_size, len(check_valid))
    print(max_size)

size = int(input())
s = list(input()[:size])
main(s)