'''
2021.06.16. 럭키 스트레이트
https://www.acmicpc.net/problem/18406
'''
import sys

sys.stdin = open("../input.txt", "r")

n = str(input())
length = len(n)
num_sum = [0] * 2
for i in range(length//2):
    num_sum[0] += int(n[i])
    num_sum[1] += int(n[length//2 + i])
if num_sum[0] != num_sum[1]:
    print("READY")
else:
    print("LUCKY")


