'''
2021.08.21. 일곱 난쟁이
https://www.acmicpc.net/problem/2309
'''
import sys
sys.stdin = open("../input.txt", "r")

data = []
for _ in range(9):
    data.append(int(input()))
data.sort()
sum9 = sum(data)
for i in range(9):
    for j in range(i+1, 9):
        if sum9-data[i]-data[j] == 100:
            not_idx1, not_idx2 = i, j
            break
for i in range(9):
    if i == not_idx1 or i == not_idx2:
        continue
    print(data[i])