### Drawing Book - Solution

def pageCount(n, p):
    total_page_count_front, target_page_count_front = n//2, p//2
    target_page_count_back = total_page_count_front - target_page_count_front
    min_turn = min(target_page_count_front, target_page_count_back)
    print(min_turn)

n = int(input())
p = int(input())
pageCount(n, p)