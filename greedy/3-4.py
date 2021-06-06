"""
2021.06.06. 1이 될 때까지
N이 1이 될 때가지 두 연산 중 하나 반복 수행 (K: 2 이상의 자연수)
1. N-1
2. N/K (반드시 나누어 떨어져야 함)
최소 횟수 구하는 프로그램 작성
"""
import sys
sys.stdin = open("../input.txt", "r")

n, k = map(int, input().split())
cnt = 0
while True:
    target = (n // k) * k
    cnt += (n-target)
    n = target
    if n < k:
        break
    cnt += 1
    n //= k
cnt += (n-1)
print(cnt)