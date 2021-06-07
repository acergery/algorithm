'''
2021.06.07. 모험가 길드
공포도가 X인 모험가는 반드시 X명 이상인 그룹에 참여해야 함
N명의 모험가 정보가 주어지고, 여행을 떠날 수 있는 그룹 수의 최대값 프로그램 작성
'''
import sys
sys.stdin = open("../input.txt", "r")

n = int(input())
fear = list(map(int, input().split()))
fear.sort()
cnt = 0     # num of group
member = 0  # member num of current group
for f in fear:
    member += 1
    if member >= f:
        cnt += 1
        member = 0
print(cnt)