### Almost Sorted - Solution 

def almostSorted(arr):
    sorted_arr = tuple(sorted(arr))
    if arr == sorted_arr:
        print("yes")
    else: 
        idx_arr, sub_arr = [], []
        count = 0
        for i in range(len(arr)):
            if arr[i] != sorted_arr[i]:
                count += 1
                idx_arr.append(i+1)
        if count == 2:
            print("yes", "\nswap", idx_arr[0], idx_arr[1])
        else:
            for j in range(len(arr)):
                if arr[j] == sorted_arr[j]:
                    continue
                else:
                    sub_arr.append(arr[j])
            rev_sorted = sorted(sub_arr, reverse=True)
            if sub_arr == rev_sorted:
                print("yes", "\nreverse", arr.index(sub_arr[0])+1, arr.index(sub_arr[-1])+1)
            else:
                print("no")

n = int(input())
arr = tuple(map(int, input().split()[:n]))
almostSorted(arr)