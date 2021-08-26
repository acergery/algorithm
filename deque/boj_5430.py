'''
2021.08.26. Integer Lists (AC)
https://www.acmicpc.net/problem/5430
'''
from sys import stdin, stdout
from collections import deque

stdin = open("../input.txt", "r")

tc = int(stdin.readline().rstrip())
for _ in range(tc):
    p = stdin.readline().rstrip()
    n = int(stdin.readline().rstrip())
    arr = deque(stdin.readline().rstrip()[1:-1].split(','))

    r = False
    error = False
    p = p.replace('RR', '')
    if n == 0 and p.find('D') != -1:
        error = True
    for p_ele in p:
        if p_ele == 'R':
            r = not r
        elif p_ele == 'D':
            if arr:
                arr.pop() if r else arr.popleft()
            else:
                error = True
                break
    if r:
        arr.reverse()

    if not error:
        stdout.write('[' + ','.join(arr) + ']\n')
    else:
        stdout.write("error\n")
