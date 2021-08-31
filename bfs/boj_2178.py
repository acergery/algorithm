'''
2021.08.31. 미로 탐색
https://www.acmicpc.net/problem/2178
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

n, m = map(int, stdin.readline().rstrip().split())
board = [stdin.readline().rstrip() for _ in range(n)]
dist = [[-1] * m for _ in range(n)]
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

q = deque()
q.append([0, 0])
dist[0][0] = 1
while q:
    cur_x, cur_y = q.popleft()
    for dir in range(4):
        nx, ny = cur_x + dx[dir], cur_y + dy[dir]
        if 0 <= nx < n and 0 <= ny < m:
            if board[nx][ny] == '1' and dist[nx][ny] == -1:
                q.append([nx, ny])
                dist[nx][ny] = dist[cur_x][cur_y] + 1

print(dist[n - 1][m - 1])
