'''
2021.08.25. 큐 2
https://www.acmicpc.net/problem/18258
'''
import sys
from collections import deque

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
q = deque()
for _ in range(n):
    cmd = sys.stdin.readline().split()
    if cmd[0] == 'push':
        q.append(cmd[1])
    elif cmd[0] == 'pop':
        print(q.popleft() if q else -1)
    elif cmd[0] == 'size':
        print(len(q))
    elif cmd[0] == 'empty':
        print(0 if q else 1)
    elif cmd[0] == 'front':
        print(q[0] if q else -1)
    elif cmd[0] == 'back':
        print(q[-1] if q else -1)


