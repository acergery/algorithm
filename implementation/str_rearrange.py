'''
2021.06.16. 문자열 재정렬
입력: 문자열 S (1 <= S의 길이 <= 10,000), 알파벳 대문자와 숫자(0~9)로만 구성됨
모든 알파벳을 오름차순으로 정렬하여 이어 출력한 뒤에, 그 뒤에 모든 숫자를 더한 값을 이어서 출력함
ex1>
input> K1KA5CB7
output> ABCKK13
ex2>
input> AJKDLSI412K4JSJ9D
output> ADDIJJJKKLSS20
'''
import sys

sys.stdin = open("../input.txt", "r")
s = list(input())
s.sort()
num = 0
cnt = 0
for i in range(len(s)):
    if s[i].isdigit():
        num += int(s[i])
        cnt += 1
ans = "".join(s[cnt:])
if cnt != 0:
    ans += str(num)
print(ans)
