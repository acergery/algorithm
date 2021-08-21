'''
2021.08.21. 숫자의 개수
https://www.acmicpc.net/problem/2577
'''
import sys
sys.stdin = open("../input.txt", "r")

# data = []
# num = [0] * 10
# for _ in range(3):
#     data.append(int(input()))
# mul = str(data[0] * data[1] * data[2])
# for m in mul:
#     num[int(m)] += 1
# for i in range(10):
#     print(num[i])

data = []
for _ in range(3):
    data.append(int(input()))
mul = list(str(data[0] * data[1] * data[2]))
for i in range(10):
    print(mul.count(str(i)))