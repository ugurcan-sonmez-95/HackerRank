### Strong Password - Solution

def minimumNumber(n, password):
    count = 0
    if not any(ch.islower() for ch in password):
        count += 1
    if not any(ch.isupper() for ch in password):
        count += 1
    if not any(ch.isdigit() for ch in password):
        count += 1
    if not any(ch in "!@#$%^&*()-+" for ch in password):
        count += 1
    count = max(count, 6-n)
    print(count)

n = int(input())
password = input()
minimumNumber(n, password)