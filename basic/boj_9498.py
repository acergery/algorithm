'''
2021.08.20 시험 성적
'''
import sys
sys.stdin = open("../input.txt", "r")

score = int(input())

if score >= 90:
    print('A')
elif score >= 80:
    print('B')
elif score >= 70:
    print('C')
elif score >= 60:
    print('D')
else:
    print('F')