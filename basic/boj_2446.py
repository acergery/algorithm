'''
2021.08.21. 별 찍기 - 9
https://www.acmicpc.net/problem/2446
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(1, n):
    print(' ' * (i-1) + '*' * (2*(n-i)+1))
for i in range(n, 0, -1):
    print(' ' * (i-1) + '*' * (2*(n-i)+1))
