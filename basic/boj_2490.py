'''
2021.08.21. 윷놀이
https://www.acmicpc.net/problem/2490
'''
import sys
sys.stdin = open("../input.txt", "r")

for _ in range(3):
    data = list(map(int, input().split()))
    if data.count(1) == 0:
        print('D')
    elif data.count(1) == 1:
        print('C')
    elif data.count(1) == 2:
        print('B')
    elif data.count(1) == 3:
        print('A')
    else:
        print('E')
