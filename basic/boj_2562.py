'''
2021.08.21. 최댓값
https://www.acmicpc.net/problem/2562
'''
import sys
sys.stdin = open("../input.txt", "r")

data = []
for _ in range(9):
    data.append(int(input()))
print(max(data))
print(data.index(max(data)) + 1)