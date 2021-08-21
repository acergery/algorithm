'''
2021.08.21. 대표값2
https://www.acmicpc.net/problem/2587
'''
import sys
sys.stdin = open("../input.txt", "r")

data = []
for _ in range(5):
    data.append(int(input()))
data.sort()
print(sum(data)//5)
print(data[2])