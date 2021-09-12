'''
2021.09.12. Term Project (텀 프로젝트)
https://www.acmicpc.net/problem/9466
'''
from sys import stdin, setrecursionlimit
from collections import deque

stdin = open("../input.txt", "r")
setrecursionlimit(10 ** 6)

def dfs(v):
    global res
    vis[v] = True
    traced.append(v)    # 경로 저장

    w = graph[v]        # 다음에 방문할 노드
    if vis[w]:          # 이미 방문 했고
        if w in traced: # 현재 지나온 경로에 이미 다음 노드가 있으면 cycle
            res += traced[traced.index(w):] # cycle인 구간부터만 팀 구성
        return
    else:
        dfs(w)

tc = int(stdin.readline().strip())
for _ in range(tc):
    n = int(stdin.readline().strip())
    vis = [False] * (n+1)
    res = []    # team 구성한 학생 수
    graph = [0] + list(map(int, stdin.readline().strip().split()))  # deque, appendleft는 시간초과 났음

    # 1번 학생부터 dfs 시작
    for i in range(1, n+1):
        if not vis[i]:
            traced = []
            dfs(i)
    print(n - len(res))
