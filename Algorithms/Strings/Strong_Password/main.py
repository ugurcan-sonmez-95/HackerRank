### Strong Password - Solution

def minimumNumber(n, password):
    count = 0
    if (any(ch.islower() for ch in password) == False):
        count += 1
    if (any(ch.isupper() for ch in password) == False):
        count += 1
    if (any(ch.isdigit() for ch in password) == False):
        count += 1
    if (any(ch in "!@#$%^&*()-+" for ch in password) == False):
        count += 1
    count = max(count, 6-n)
    print(count)

n = int(input())
password = input()
minimumNumber(n, password)