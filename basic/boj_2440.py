'''
2021.08.21. 별 찍기 - 3
https://www.acmicpc.net/problem/2440
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(n, 0, -1):
    print('*' * i)
