'''
2021.08.21. 별 찍기 - 6
https://www.acmicpc.net/problem/2443
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(n, 0, -1):
    print(' ' * (n-i) + '*' * (2*i-1))
