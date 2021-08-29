'''
2021.08.29. 괄호의 값
https://www.acmicpc.net/problem/2504
'''
from sys import stdin, stdout

stdin = open("../input.txt", "r")

ans, mul = 0, 1
data = stdin.readline().rstrip()
s = []
for i in range(len(data)):
    if data[i] == '(' or data[i] == '[':
        mul *= 2 if data[i] == '(' else 3
        s.append(data[i])
    elif s and data[i] == ')':
        if i >= 1 and data[i - 1] == '(':
            ans += mul
        if s[-1] == '(':
            s.pop()
        mul //= 2
    elif s and data[i] == ']':
        if i >= 1 and data[i - 1] == '[':
            ans += mul
        if s[-1] == '[':
            s.pop()
        mul //= 3
    else:
        ans = 0
        break

print(ans if not s else 0)

