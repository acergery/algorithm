'''
2021.06.08. 곱하기 혹은 더하기
숫자로만 이루어진 문자열 S
하나씩 모든 숫자를 확인(왼->오)하며 숫자 사이에 'X' or '+' 연산자 넣어
만들수 있는 가장 큰 숫자 구하는 프로그램 작성
(단, 일반적인 방식과 달리 모든 연산은 왼->오 순서대로 이루어짐)
'''
import sys
sys.stdin = open("../input.txt", "r")

s = str(input())
ans = int(s[0])
for i in range(1, len(s)):
    if int(s[i]) > 1 and ans > 1:
        ans *= int(s[i])
    else:
        ans += int(s[i])
print(ans)
