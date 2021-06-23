'''
2021.06.23. 문자열 압축
https://programmers.co.kr/learn/courses/30/lessons/60057
'''
def solution(s):
    ans = len(s)
    for cut in range(1, len(s)//2 + 1):
        compressed = ""
        prev = s[:cut]
        cnt = 1
        for i in range(cut, len(s), cut):
            if s[i:i+cut] == prev:
                cnt += 1
            else:
                compressed += str(cnt) + prev if cnt > 1 else prev
                prev = s[i:i+cut]
                cnt = 1

        compressed += str(cnt) + prev if cnt > 1 else prev
        ans = min(ans, len(compressed))
    return ans

a = [
    "aabbaccc",
    "ababcdcdababcdcd",
    "abcabcdede",
    "abcabcabcabcdededededede",
    "xababcdcdababcdcd",
]

for x in a:
    print(solution(x))