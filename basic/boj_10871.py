'''
2021.08.20 X보다 작은 수
'''
import sys
sys.stdin = open("../input.txt", "r")

n, x = map(int, input().split())
a = list(map(int, input().split()))
for ele in a:
    if ele < x:
        print(ele, end=' ')