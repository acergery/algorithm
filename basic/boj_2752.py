'''
2021.08.20. 세수정렬
'''
import sys
sys.stdin = open("../input.txt", "r")

num = list(map(int, input().split()))
num.sort()
for n in num:
    print(n, end=' ')
