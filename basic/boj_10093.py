'''
2021.08.21. Numbers (숫자)
https://www.acmicpc.net/problem/10093
'''
import sys
sys.stdin = open("../input.txt", "r")

# a, b = map(int, input().split())
#
# if a > b:
#     a, b = b, a
# if a == b:
#     print('0')
# else:
#     print(b-a-1)
#     for i in range(a+1, b):
#         print(i, end=' ')

a, b = map(int, input().split())
a, b = min(a, b), max(a, b)
l = list(range(a + 1, b))
print(len(l))
print(*l)