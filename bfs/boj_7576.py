'''
2021.08.31. 토마토
https://www.acmicpc.net/problem/7576
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

m, n = map(int, stdin.readline().rstrip().split())
board = [list(map(int, stdin.readline().rstrip().split())) for _ in range(n)]
dist = [[-1] * m for _ in range(n)]

q = deque()

for i in range(n):
    for j in range(m):
        if board[i][j] == 1:
            dist[i][j] = 0
            q.append([i, j])

while q:
    cur_x, cur_y = q.popleft()
    for dir in range(4):
        nx, ny = cur_x + dx[dir], cur_y + dy[dir]
        if 0 <= nx < n and 0 <= ny < m:
            if board[nx][ny] != -1 and dist[nx][ny] == -1:
                q.append([nx, ny])
                dist[nx][ny] = dist[cur_x][cur_y] + 1

ans = 0
isPossible = True
for i in range(n):
    for j in range(m):
        if dist[i][j] == -1 and board[i][j] == 0:
            isPossible = False
        ans = max(ans, dist[i][j])

print(ans if isPossible else -1)


