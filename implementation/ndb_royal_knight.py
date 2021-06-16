'''
2021.06.16. 왕실의 나이트
'''
import sys
sys.stdin = open("../input.txt", "r")

dx = [-2, -1, 1, 2, 2, 1, -1, -2]
dy = [-1, -2, -2, -1, 1, 2, 2, 1]

cur_pos = input()
x = int(ord(cur_pos[0])) - int(ord('a')) + 1
y = int(cur_pos[1])

ans = 0
for i in range(8):
    next_x = x + dx[i]
    next_y = y + dy[i]
    if next_x < 1 or next_y < 1 or next_x > 8 or next_y > 8:
        continue
    ans += 1
print(ans)
