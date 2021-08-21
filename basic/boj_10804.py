'''
2021.08.21. 카드 역배치
https://www.acmicpc.net/problem/10804
'''
import sys
sys.stdin = open("../input.txt", "r")

cards = [i for i in range(21)]
for _ in range(10):
    a, b = map(int, input().split())
    tmp = cards[:a] + cards[a:b+1][::-1] + cards[b+1:]
    cards = tmp
print(*cards[1:])