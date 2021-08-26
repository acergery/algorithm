'''
2021.08.26. 덱
https://www.acmicpc.net/problem/10866
'''
import sys
from collections import deque

sys.stdin = open("../input.txt", "r")

dq = deque()
n = int(sys.stdin.readline())
for _ in range(n):
    cmd = sys.stdin.readline().rstrip().split()
    if cmd[0] == 'push_front':
        dq.appendleft(cmd[1])
    elif cmd[0] == 'push_back':
        dq.append(cmd[1])
    elif cmd[0] == 'pop_front':
        print(dq.popleft() if dq else -1)
    elif cmd[0] == 'pop_back':
        print(dq.pop() if dq else -1)
    elif cmd[0] == 'size':
        print(len(dq))
    elif cmd[0] == 'empty':
        print(0 if dq else 1)
    elif cmd[0] == 'front':
        print(dq[0] if dq else -1)
    elif cmd[0] == 'back':
        print(dq[-1] if dq else -1)
