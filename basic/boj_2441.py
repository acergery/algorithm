'''
2021.08.21. 별 찍기 - 4
https://www.acmicpc.net/problem/2441
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(n, 0, -1):
    print(' ' * (n-i) + '*' * i)
