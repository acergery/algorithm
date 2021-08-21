'''
2021.08.21. 빠른 A+B
https://www.acmicpc.net/problem/15552
'''
import sys
sys.stdin = open("../input.txt", "r")

tc = int(input())
for _ in range(tc):
    a, b = map(int, sys.stdin.readline().split())
    print(a+b)