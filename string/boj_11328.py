'''
2021.08.21. Strfry
https://www.acmicpc.net/problem/11328
'''
import sys

sys.stdin = open("../input.txt", "r")

tc = int(input())
for _ in range(tc):
    s1, s2 = map(str, input().split())
    s1, s2 = list(s1), list(s2)
    s1.sort(), s2.sort()
    if s1 == s2:
        print("Possible")
    else:
        print("Impossible")