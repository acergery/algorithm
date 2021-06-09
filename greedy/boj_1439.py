'''
2021.06.09. 문자열 뒤집기
'''
import sys
sys.stdin = open("../input.txt", "r")

def blk_cnt(ch, blk_num):
    num = int(ch)
    if num == 0:
        blk_num[0] += 1
    else:
        blk_num[1] += 1

s = str(input())
blk_num = [0] * 2
blk_cnt(s[0], blk_num)
for i in range(1, len(s)):
    if s[i] != s[i - 1]:
        blk_cnt(s[i], blk_num)
print(min(blk_num))