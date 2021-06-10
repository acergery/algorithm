'''
2021.06.10. 만들 수 없는 금액(ncb_11_4)
(boj_2437 저울과 같은 문제) https://www.acmicpc.net/problem/2437
N개의 동전을 이용하여 만들 수 없는 양의 정수 금액 중 최솟값 구하는 프로그램 작성
1 <= N <= 1000, 각 화폐 단위는 1,000,000 이하의 자연수
ex1.
<input>
5
3 2 1 1 9
<output>
8

ex2.
<input>
3
3 5 7
<output>
1
'''
import sys
sys.stdin = open("../input.txt", "r")

n = int(input())
coins = list(map(int, input().split()))
coins.sort()

target = 1
for coin in coins:
    if target < coin: # 만들 수 없는 금액을 찾으면 반복 종료
        break
    target += coin

print(target)
'''
설명: [3, 2, 1, 1, 9] -> [1, 1, 2, 3, 9]
target(확인하고자 하는 금액)     새로 추가된 동전   현재 동전 리스트   만들 수 있는 금액
1                               1               [1]             1
1+1=2                           1               [1, 1]          1~2
2+1=3                           2               [1, 1, 2]       1~4
3+2=5                           3               [1, 1, 2, 3]    1~7
5+3=8                           9               [1, 1, 2, 3, 9] 1~7 / 10~16 (8~9 빠짐)    
'''