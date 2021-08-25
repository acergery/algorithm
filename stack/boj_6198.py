'''
2021.08.25. Bad Hair Day (옥상 정원 꾸미기)
https://www.acmicpc.net/problem/6198
'''
import sys

sys.stdin = open("../input.txt", "r")

buildings, s = [], []
ans = 0
n = int(sys.stdin.readline())
for _ in range(n):
    buildings.append(int(sys.stdin.readline().rstrip()))

for i in range(n):
    while s and s[-1] <= buildings[i]:
        s.pop()         # 못 보는 건물은 pop
    ans += len(s)       # 해당 건물을 볼 수 있는 건물의 개수
    s.append(buildings[i])
print(ans)