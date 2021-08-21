'''
2021.08.21. 개수 세기
https://www.acmicpc.net/problem/10807
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(input())
data = list(map(int, input().split()))
v = int(input())
print(data.count(v))
