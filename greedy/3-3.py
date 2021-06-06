"""
2021.06.06. 숫자 카드 게임
아래 규칙에 따라 가장 높은 숫자가 쓰인 카드 한 장 뽑음 (NxM 형태)
행 선택, 그 행에서 가장 숫자가 낮은 카드 뽑아야 함
룰에 맞게 카드 뽑는 프로그램 작성
"""
import sys
sys.stdin = open("../input.txt", "r")

n, m = map(int, input().split())
res = 0
for i in range(n):
    num = list(map(int, input().split()))
    mn = min(num)
    res = max(res, mn)
print(res)