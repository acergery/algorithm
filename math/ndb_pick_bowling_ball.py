'''
2021.06.11. 볼링공 고르기
두 사람이 볼링을 침, 서로 무게가 다른 공 고름
볼링공은 총 N개, 무게가 적혀있고, 공의 번호는 1번부터 순서대로 부여
같은 무게의 공이 여러 개 있어도 다른 공으로 간주, 무게: 1~M(자연수)
두 사람이 볼링공을 고르는 경우의 수 구하기
ex1.
<input>
5 3
1 3 2 3 2
<output>
8

ex2.
<input>
8 5
1 5 4 3 2 4 5 2
<output>
25
'''
import sys
sys.stdin = open("../input.txt", "r")

n, m = map(int, input().split())
w = list(map(int, input().split()))
w_cnt = [0] * m

ans = n*(n-1)//2
for weight in w:
    w_cnt[weight-1] += 1
sub = 0
for cnt in w_cnt:
    sub += cnt*(cnt-1)//2
ans -= sub
print(ans)
