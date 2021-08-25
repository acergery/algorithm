'''
2021.08.25. 스택
https://www.acmicpc.net/problem/10828
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
s = []
for _ in range(n):
    cmd = list(map(str, sys.stdin.readline().split()))
    if cmd[0] == 'push':
        s.append(int(cmd[1]))
    elif cmd[0] == 'pop':
        if s:
            print(s.pop())
        else:
            print(-1)
    elif cmd[0] == 'size':
        print(len(s))
    elif cmd[0] == 'empty':
        if s:
            print(0)
        else:
            print(1)
    elif cmd[0] == 'top':
        if s:
            print(s[-1])
        else:
            print(-1)

