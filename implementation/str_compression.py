'''
2021.06.23. 문자열 압축
https://programmers.co.kr/learn/courses/30/lessons/60057
'''
def solution(s):
    length = []
    result = ""
    for cut in range(1, len(s)//2 + 2):
        prev = s[:cut]
        cnt = 1
        for i in range(cut, len(s), cut):
            if s[i:i+cut] == prev:
                cnt += 1
            else:
                if cnt == 1:
                    cnt = ""
                result += str(cnt) + prev
                prev = s[i:i+cut]
                cnt = 1

        if cnt == 1:
            cnt = ""
        result += str(cnt) + prev
        length.append(len(result))
        print(result, len(result))
        result = ""

    return min(length)

a = [
    "aabbaccc",
    "ababcdcdababcdcd",
    "abcabcdede",
    "abcabcabcabcdededededede",
    "xababcdcdababcdcd",
]

for x in a:
    print(solution(x))