### Staircase - Solution

def staircase(size):
    for i in range(size):
        print((size-i-1)*' ' + (i+1)*'#')

size = int(input())
staircase(size)