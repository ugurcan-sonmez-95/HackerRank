### Time Conversion - Solution

def timeConversion(hour):
    if (hour[:2] == '12') and ('AM' in hour):
        print('00' + hour[2:8])
    elif 'AM' in hour:
        print(hour[:8])
    elif (hour[:2] == '12') and ('PM' in hour):
        print(hour[:8])
    elif 'PM' in hour:
        print(str(int(hour[:2])+12) + hour[2:8])

hour = input()
timeConversion(hour)