'''
2021.08.25. 탑
https://www.acmicpc.net/problem/2493
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
towers = list(map(int, sys.stdin.readline().rstrip().split()))
s, ans = [], []

for i in range(n):
    while s:
        if towers[i] < s[-1][1]:
            ans.append(s[-1][0] + 1)
            break
        else:
            s.pop()
    if not s:
        ans.append(0)
    s.append([i, towers[i]])
print(*ans)