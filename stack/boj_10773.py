'''
2021.08.25. Zero That Out (제로)
https://www.acmicpc.net/problem/10773
'''
import sys

sys.stdin = open("../input.txt", "r")

k = int(sys.stdin.readline())
s = []
for _ in range(k):
    num = int(sys.stdin.readline())
    if num == 0:
        s.pop()
    else:
        s.append(num)
print(sum(s))

