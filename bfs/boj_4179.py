'''
2021.08.31. Fire! (불!)
https://www.acmicpc.net/problem/4179
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

r, c = map(int, stdin.readline().rstrip().split())
board = [list(map(str, stdin.readline().rstrip())) for _ in range(r)]
dist = [[-1] * c for _ in range(r)]
fire = [[-1] * c for _ in range(r)]
dist_q, fire_q = deque(), deque()

for i in range(r):
    for j in range(c):
        if board[i][j] == 'J':
            dist_q.append([i, j])
            dist[i][j] = 0
        if board[i][j] == 'F':
            fire_q.append([i, j])
            fire[i][j] = 0

while fire_q:
    cur_x, cur_y = fire_q.popleft()
    for dir in range(4):
        nx, ny = cur_x + dx[dir], cur_y + dy[dir]
        if 0 <= nx < r and 0 <= ny < c:
            if board[nx][ny] == '.' and fire[nx][ny] == -1:
                fire_q.append([nx, ny])
                fire[nx][ny] = fire[cur_x][cur_y] + 1

while dist_q:
    cur_x, cur_y = dist_q.popleft()
    for dir in range(4):
        nx, ny = cur_x + dx[dir], cur_y + dy[dir]
        if not (0 <= nx < r and 0 <= ny < c):
            print(dist[cur_x][cur_y] + 1)
            exit(0)
        if dist[nx][ny] >= 0 or board[nx][ny] == '#':
            continue
        if fire[nx][ny] != -1 and fire[nx][ny] <= dist[cur_x][cur_y] + 1:
            continue
        dist_q.append([nx, ny])
        dist[nx][ny] = dist[cur_x][cur_y] + 1
print("IMPOSSIBLE")