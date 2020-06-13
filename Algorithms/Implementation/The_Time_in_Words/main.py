### The Time in Words - Solution

def timeInWords(h, m):
    time_str, conversion = "", {}
    conversion[1] = "one"
    conversion[2] = "two"
    conversion[3] = "three"
    conversion[4] = "four"
    conversion[5] = "five"
    conversion[6] = "six"
    conversion[7] = "seven"
    conversion[8] = "eight"
    conversion[9] = "nine"
    conversion[10] = "ten"
    conversion[11] = "eleven"
    conversion[12] = "twelve"
    conversion[13] = "thirteen"
    conversion[14] = "fourteen"
    conversion[15] = "fifteen"
    conversion[16] = "sixteen"
    conversion[17] = "seventeen"
    conversion[18] = "eighteen"
    conversion[19] = "nineteen"
    conversion[20] = "twenty"
    conversion[21] = "twenty one"
    conversion[22] = "twenty two"
    conversion[23] = "twenty three"
    conversion[24] = "twenty four"
    conversion[25] = "twenty five"
    conversion[26] = "twenty six"
    conversion[27] = "twenty seven"
    conversion[28] = "twenty eight"
    conversion[29] = "twenty nine"
    for i in range(1, 13):
        if ((h == i) and (m == 0)):
            time_str = conversion[i] + " o' clock"
        elif ((h == i) and (m == 15)):
            time_str = "quarter past " + conversion[i]
        elif ((h == i) and (m == 30)):
            time_str = "half past " + conversion[i]
        elif ((h == i) and (m == 45)):
            time_str = "quarter to " + conversion[i+1]
        elif ((h == i) and (m == 1)):
            time_str = "one minute past " + conversion[i]
        elif ((h == i) and (m == 59)):
            time_str = "one minute to " + conversion[i+1]
        elif ((h == i) and (m < 30)):
            time_str = conversion[m] + " minutes past " + conversion[i]
        elif ((h == i) and (m > 30)):
            time_str = conversion[60-m] + " minutes to " + conversion[i+1]
    print(time_str)

h, m = (int(input()) for _ in range(2))
timeInWords(h, m)