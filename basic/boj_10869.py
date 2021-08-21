'''
2021.08.20 사칙연산
'''
import sys
sys.stdin = open("../input.txt", "r")

a, b = map(int, input().split())
print(a+b)
print(a-b)
print(a*b)
print(a//b)
print(a%b)
