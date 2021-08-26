'''
2021.08.26. 회전하는 큐
https://www.acmicpc.net/problem/1021
'''
import sys
from collections import deque

sys.stdin = open("../input.txt", "r")

n, m = map(int, sys.stdin.readline().rstrip().split())
target = list(map(int, sys.stdin.readline().rstrip().split()))
dq = deque([i for i in range(1, n+1)])

cnt = 0
for t in target:
    if dq[0] == t:
        dq.popleft()
        continue
    dq_idx = dq.index(t)

    # dq_idx <= len(dq) - dq_idx 앞->뒤
    if dq_idx <= len(dq) // 2:
        dq.rotate(-dq_idx)
        cnt += dq_idx

    # 뒤 -> 앞
    else:
        dq.rotate(len(dq) - dq_idx)
        cnt += len(dq) - dq_idx
    dq.popleft()

print(cnt)