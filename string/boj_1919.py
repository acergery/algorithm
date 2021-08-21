'''
2021.08.21. 에너그램 만들기
https://www.acmicpc.net/problem/1919
'''
import sys

sys.stdin = open("../input.txt", "r")

s1 = input()
s2 = input()
ans = 0
for i in range(ord('a'), ord('z')+1):
    ans += abs(s1.count(chr(i)) - s2.count(chr(i)))
print(ans)