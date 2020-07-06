### Beautiful Binary String - Solution

def beautifulBinaryString(b):
    change_count = 0
    for i in range(len(b)-2):
        if "".join(b[i:(i+3)]) == "010":
            if b[i+2] == "0":
                b[i+2] = "1"
            else:
                b[i+2] = "0"
            change_count += 1
    print(change_count)

n = int(input())
b = list(input()[:n])
beautifulBinaryString(b)