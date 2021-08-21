'''
2021.08.21. 윤년
'''
import sys
sys.stdin = open("../input.txt", "r")

y = int(input())
if y%4 == 0 and (y%100 != 0 or y%400 == 0):
    print('1')
else:
    print('0')
