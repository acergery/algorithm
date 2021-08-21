'''
2021.08.21. 방 배정
https://www.acmicpc.net/problem/13300
'''
import sys

sys.stdin = open("../input.txt", "r")

n, k = map(int, input().split())
stu = [[0]*7 for _ in range(2)]

for _ in range(n):
    s, y = map(int, input().split())
    stu[s][y] += 1

ans = 0
for i in range(2):
    for j in range(1, 7):
        ans += stu[i][j] // k
        if stu[i][j] % k != 0:
            ans += 1
print(ans)