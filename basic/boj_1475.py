'''
2021.08.21. 방 번호
https://www.acmicpc.net/problem/1475
'''
import sys

sys.stdin = open("../input.txt", "r")


n = list(input())
num = [0] * 10
for ele in n:
    num[int(ele)] += 1
num[6] += num[9]
if num[6] % 2 == 1:
    num[6] += 1
num[6] //= 2
print(max(num[:9]))