'''
2021.09.01. 유기농 배추
https://www.acmicpc.net/problem/1012
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

tc = int(stdin.readline().strip())
for _ in range(tc):
    m, n, k = map(int, stdin.readline().strip().split())
    board = [[0] * m for _ in range(n)]
    vis = [[False] * m for _ in range(n)]
    q = deque()
    cnt = 0

    for _ in range(k):
        x, y = map(int, stdin.readline().strip().split())
        board[y][x] = 1

    for i in range(n):
        for j in range(m):
            if vis[i][j] or board[i][j] == 0: continue
            q.append([i, j])
            vis[i][j] = True
            cnt += 1

            while q:
                cur_y, cur_x = q.popleft()
                for dir in range(4):
                    ny, nx = cur_y + dy[dir], cur_x + dx[dir]
                    if ny < 0 or ny >= n or nx < 0 or nx >= m: continue
                    if vis[ny][nx] or board[ny][nx] == 0: continue
                    q.append([ny, nx])
                    vis[ny][nx] = True
    print(cnt)