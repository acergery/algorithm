'''
2021.08.21. 핸드폰 요금
https://www.acmicpc.net/problem/1267
'''
import sys
sys.stdin = open("../input.txt", "r")

n = int(input())
call_times = list(map(int, input().split()))
y, m = 0, 0
for call_time in call_times:
    y += 10 * (call_time//30 + 1)
    m += 15 * (call_time//60 + 1)
if y == m:
    print('Y M', y)
elif y < m:
    print('Y', y)
else:
    print('M', m)