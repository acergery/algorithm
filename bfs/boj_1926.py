'''
2021.08.31. 그림
https://www.acmicpc.net/problem/1926
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

n, m = map(int, stdin.readline().rstrip().split())
board = [list(map(int, stdin.readline().rstrip().split())) for _ in range(n)]
vis = [[False]*m for _ in range(n)]
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def bfs(x, y):
    area = 1
    q = deque()
    q.append([x, y])
    while q:
        cur_x, cur_y = q.popleft()
        for dir in range(4):
            nx, ny = cur_x + dx[dir], cur_y + dy[dir]
            if 0 <= nx < n and 0 <= ny < m:
                if board[nx][ny] == 1 and not vis[nx][ny]:
                    q.append([nx, ny])
                    vis[nx][ny] = True
                    area += 1
    return area

num, area = 0, 0
for i in range(n):
    for j in range(m):
        if board[i][j] == 0 or vis[i][j]: continue
        num += 1
        vis[i][j] = True
        area = max(area, bfs(i, j))
print(num, area)