'''
2021.08.29. The Balance of the World (균형잡힌 세상)
https://www.acmicpc.net/problem/4949
'''
from sys import stdin, stdout

stdin = open("../input.txt", "r")
while True:
    isBal = True
    st = stdin.readline().rstrip()
    if st == '.':
        break
    s = []
    for ch in st:
        if ch == '(' or ch == '[':
          s.append(ch)
        elif ch == ')':
            if s and s[-1] == '(':
                s.pop()
            else:
                isBal = False
                break
        elif ch == ']':
            if s and s[-1] == '[':
                s.pop()
            else:
                isBal = False
                break

    print("yes" if isBal and not s else "no")