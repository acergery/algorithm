'''
2021.08.21. 별 찍기 - 7
https://www.acmicpc.net/problem/2444
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
for i in range(1, n+1):
    print(' ' * (n-i) + '*' * (2*i-1))
for i in range(n-1, 0, -1):
    print(' ' * (n-i) + '*' * (2*i-1))
