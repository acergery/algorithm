'''
2021.09.01. 영역 구하기
https://www.acmicpc.net/problem/2583
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

m, n, k = map(int, stdin.readline().strip().split())
board = [[0] * n for _ in range(m)]
vis = [[False] * n for _ in range(m)]
q = deque()
areas = []

for _ in range(k):
    bl_x, bl_y, tr_x, tr_y = map(int, stdin.readline().strip().split())
    for i in range(bl_y, tr_y):
        for j in range(bl_x, tr_x):
            board[i][j]= 1

for i in range(m):
    for j in range(n):
        if vis[i][j] or board[i][j] == 1: continue
        q.append([i, j])
        vis[i][j] = True
        area = 1

        while q:
            cur_x, cur_y = q.popleft()
            for dir in range(4):
                nx, ny = cur_x + dx[dir], cur_y + dy[dir]
                if nx < 0 or nx >= m or ny < 0 or ny >= n: continue
                if vis[nx][ny] or board[nx][ny] == 1: continue
                q.append([nx, ny])
                vis[nx][ny] = True
                area += 1
        areas.append(area)
areas.sort()
print(len(areas))
print(*areas)