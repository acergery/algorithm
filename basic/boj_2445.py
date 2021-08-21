'''
2021.08.21. 별 찍기 - 8
https://www.acmicpc.net/problem/2445
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(1, n):
    print('*' * i + ' ' * 2*(n-i) + '*' * i)
for i in range(n, 0, -1):
    print('*' * i + ' ' * 2*(n-i) + '*' * i)
