'''
2021.08.22. SumX (두 수의 합)
https://www.acmicpc.net/problem/3273
'''
import sys

sys.stdin = open("../input.txt", "r")

# 시간 초과
# n = int(input())
# data = list(map(int, input().split()))
# data.sort()
# x = int(input())
# ans = 0
# for i in range(n):
#     for j in range(i+1, n):
#         if x == data[i] + data[j]:
#             ans += 1
# print(ans)

n = int(input())
data = sorted(list(map(int, input().split())))
x = int(input())

s, e = 0, n-1
ans = 0
while s < e:
    tmp = data[s] + data[e]
    if tmp < x:
        s += 1
    elif tmp > x:
        e -= 1
    else:
        ans += 1
        s += 1
print(ans)
