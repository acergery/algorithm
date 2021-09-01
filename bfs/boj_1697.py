'''
2021.09.01. Catch That Cow (숨바꼭질)
https://www.acmicpc.net/problem/1697
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

n, k = map(int, stdin.readline().strip().split())
dist = [-1 for _ in range(100001)]

q = deque()
q.append(n)
dist[n] = 0

while q:
    cur = q.popleft()
    for next in [cur-1, cur+1, cur*2]:
        if next < 0 or next > 100000: continue
        if dist[next] != -1: continue
        q.append(next)
        dist[next] = dist[cur] + 1

print(dist[k])