'''
2021.08.21. 홀수
https://www.acmicpc.net/problem/2576
'''
import sys
sys.stdin = open("../input.txt", "r")

odds = []
for _ in range(7):
    data = int(input())
    if data % 2 == 1:
        odds.append(data)

if len(odds) == 0:
    print('-1')
else:
    print(sum(odds))
    print(min(odds))