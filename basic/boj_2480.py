'''
2021.08.21. 주사위 세개
'''
import sys
sys.stdin = open("../input.txt", "r")

data = list(map(int, input().split()))
data.sort()
n = [0] * 6
for d in data:
    n[d-1] += 1
    ans = d*100
for i in range(6):
    if n[i] == 3:
        ans = 10000 + (i+1)*1000
    elif n[i] == 2:
        ans = 1000 + (i+1)*100
print(ans)

# a, b, c = map(int, input().split())
# if a==b==c:
#     print(10000 + a*1000)
# elif a==b or a==c:
#     print(1000 + a*100)
# elif b==c:
#     print(1000 + b*100)
# else:
#     print(max(a, b, c)*100)
