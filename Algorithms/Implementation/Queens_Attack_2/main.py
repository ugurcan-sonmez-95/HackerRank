### Queen's Attack II - Solution

def queensAttack(*args):
    up, down, left, right = n-r_q, r_q-1, c_q-1, n-c_q
    left_up, left_down = min(left, up), min(left, down)
    right_up, right_down = min(right, up), min(right, down)
    # Checks all the squares queen can go
    for obstacle in obstacles:
        if obstacle[1] == c_q:
            if obstacle[0] < r_q:
                down = min(down, r_q-obstacle[0]-1)
            else:
                up = min(up, obstacle[0]-r_q-1)
        elif obstacle[0] == r_q:
            if obstacle[1] < c_q:
                left = min(left, c_q-obstacle[1]-1)
            else:
                right = min(right, obstacle[1]-c_q-1)
        elif abs(r_q-obstacle[0]) == abs(c_q-obstacle[1]):
            if obstacle[1] < c_q:
                if r_q < obstacle[0]:
                    left_up = min(left_up, c_q-obstacle[1]-1)
                else:
                    left_down = min(left_down, c_q-obstacle[1]-1)
            else:
                if r_q < obstacle[0]:
                    right_up = min(right_up, obstacle[1]-c_q-1)
                else:
                    right_down = min(right_down, obstacle[1]-c_q-1) 
    total = up + down + left + right + left_up + left_down + right_up + right_down
    print(total)

n, k = map(int, input().split())
r_q, c_q = map(int, input().split())
obstacles = tuple(tuple(map(int, input().split()[:2])) for _ in range(k))
queensAttack(n, k, r_q, c_q, obstacles)