'''
2021.08.25. 스택 수열
https://www.acmicpc.net/problem/1874
'''
import sys

sys.stdin = open("../input.txt", "r")

n = int(sys.stdin.readline())
s, ans = [], []
cnt = 0
X = True

for _ in range(n):
    num = int(sys.stdin.readline().rstrip())

    while cnt < num:
        cnt += 1
        s.append(cnt)
        ans.append('+')
    if s[-1] == num:
        s.pop()
        ans.append('-')
    else:
        X = False
        break

print('\n'.join(ans) if X else "NO")