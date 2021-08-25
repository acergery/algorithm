'''
2021.08.25. 큐
https://www.acmicpc.net/problem/10845
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
q = []
for _ in range(n):
    cmd = list(map(str, sys.stdin.readline().split()))
    if cmd[0] == 'push':
        q.append(int(cmd[1]))
    elif cmd[0] == 'pop':
        if q:
            print(q.pop(0))
        else:
            print(-1)
    elif cmd[0] == 'size':
        print(len(q))
    elif cmd[0] == 'empty':
        if q:
            print(0)
        else:
            print(1)
    elif cmd[0] == 'front':
        if q:
            print(q[0])
        else:
            print(-1)
    elif cmd[0] == 'back':
        if q:
            print(q[-1])
        else:
            print(-1)

