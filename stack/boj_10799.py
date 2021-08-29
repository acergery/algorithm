'''
2021.08.29. 쇠막대기
https://www.acmicpc.net/problem/10799
'''
from sys import stdin, stdout

stdin = open("../input.txt", "r")

ans = 0
bar = stdin.readline().rstrip()
s = []

for i in range(len(bar)):
    if bar[i] == '(':
        s.append(bar[i])
    else:
        s.pop()
        ans += len(s) if bar[i-1] == '(' else 1
print(ans)