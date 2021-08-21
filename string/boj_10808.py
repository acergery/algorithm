'''
2021.08.21. 알파벳 개수
https://www.acmicpc.net/problem/10808
'''
import sys

sys.stdin = open("../input.txt", "r")

s = input()
alpha = [0] * 26
for ch in s:
    alpha[ord(ch)-ord('a')] += 1
print(*alpha)
