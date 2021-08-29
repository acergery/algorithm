'''
2021.08.29. Parenthesis (괄호)
https://www.acmicpc.net/problem/9012
'''
from sys import stdin, stdout

stdin = open("../input.txt", "r")
tc = int(stdin.readline().rstrip())
for _ in range(tc):
    s = []
    isBal = True
    st = stdin.readline().rstrip()

    for ch in st:
        if ch == '(':
          s.append(ch)
        elif ch == ')':
            if s and s[-1] == '(':
                s.pop()
            else:
                isBal = False
                break

    print("YES" if isBal and not s else "NO")