'''
2021.08.23. editor (에디터)
https://www.acmicpc.net/problem/1406
'''
import sys

sys.stdin = open("../input.txt", "r")

# 시간초과 O(n)
# s = str(input())
# m = int(input())
# cur = len(s)
# for _ in range(m):
#     op = sys.stdin.readline().strip()
#     if op[0] == 'L':
#         if cur != 0:
#             cur -= 1
#     elif op[0] == 'D':
#         if cur != len(s):
#             cur += 1
#     elif op[0] == 'B':
#         if cur != 0:
#             s = s[:cur-1] + s[cur:]
#             cur -= 1
#     elif op[0] == 'P':
#         s = s[:cur] + op[2] + s[cur:]
#         cur += 1
# print(s)

s1 = list(map(str, sys.stdin.readline().rstrip()))
s2 = []
m = int(input())

for _ in range(m):
    op = sys.stdin.readline().rstrip()
    if op[0] == 'L' and s1:
        s2.append(s1.pop())
    elif op[0] == 'D' and s2:
        s1.append(s2.pop())
    elif op[0] == 'B' and s1:
        s1.pop()
    elif op[0] == 'P':
        s1.append(op[2])
print(''.join(s1 + s2[::-1]))

