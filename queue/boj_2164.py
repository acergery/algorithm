'''
2021.08.25. 카드 2
https://www.acmicpc.net/problem/2164
'''
import sys
from collections import deque

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
q = deque()
for i in range(1, n+1):
    q.append(i)
while len(q) >= 2:
    q.popleft()
    q.append(q.popleft())
print(*q)

