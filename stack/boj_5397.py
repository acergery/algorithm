'''
2021.08.23. Keylogger (키로거)
https://www.acmicpc.net/problem/5397
'''
import sys

sys.stdin = open("../input.txt", "r")

tc = int(sys.stdin.readline().rstrip())
for _ in range(tc):
    data = list(map(str, sys.stdin.readline().rstrip()))
    s1, s2 = [], []
    for dt in data:
        if dt == '<':
            if s1:
                s2.append(s1.pop())
        elif dt == '>':
            if s2:
                s1.append(s2.pop())
        elif dt == '-':
            if s1:
                s1.pop()
        else:
            s1.append(dt)

    print(''.join(s1+s2[::-1]))