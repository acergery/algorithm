'''
2021.08.23. 요세푸스 문제
https://www.acmicpc.net/problem/1158
'''
import sys

sys.stdin = open("../input.txt", "r")

n, k = map(int, input().split())
people = [i for i in range(1, n+1)]
ans = []
del_idx = 0
for _ in range(n):
    del_idx = (del_idx + k-1) % len(people)
    ans.append(str(people.pop(del_idx)))
print("<" + ", ".join(ans) + ">")