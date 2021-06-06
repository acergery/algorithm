"""
2021.06.06. 큰 수의 법칙
주어진 수들을 M번 더하여 가장 큰 수를 만드는 법칙
특정 idx에 해당하는 수가 연속해서 K번 초과하여 더해질 수 없음
"""
import sys
sys.stdin = open("../input.txt", "r")

n, m, k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
first = data[n-1]
second = data[n-2]

cnt = int(m/(k+1))*k + m%(k+1)

result = cnt * first
result += (m-cnt) * second

print(result)