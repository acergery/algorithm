'''
2021.09.10. 토마토
https://www.acmicpc.net/problem/7569
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, -1, 0, 0, 0, 0]
dy = [0, 0, 1, -1, 0, 0]
dz = [0, 0, 0, 0, 1, -1]

def bfs():
    while q:
        cur_x, cur_y, cur_z = q.popleft()
        vis[cur_x][cur_y][cur_z] = True
        for dir in range(6):
            nx, ny, nz = cur_x + dx[dir], cur_y + dy[dir], cur_z + dz[dir]
            if 0 <= nx < h and 0 <= ny < n and 0 <= nz < m and boards[nx][ny][nz] == 0 and not vis[nx][ny][nz]:
                q.append([nx, ny, nz])
                boards[nx][ny][nz] = boards[cur_x][cur_y][cur_z] + 1
                vis[nx][ny][nz] = True

m, n, h = map(int, stdin.readline().rstrip().split())
boards = []
vis = [[[False for _ in range(m)] for _ in range(n)] for _ in range(h)]

q = deque()

for i in range(h):
    board = []
    for j in range(n):
        board.append(list(map(int, stdin.readline().rstrip().split())))
    boards.append(board)

for i in range(h):
    for j in range(n):
        for k in range(m):
            if boards[i][j][k] == 1:
                q.append([i, j, k])

bfs()
isPossible = True
ans = 0
for i in range(h):
    for j in range(n):
        for k in range(m):
            if boards[i][j][k] == 0:
                isPossible = False
            ans = max(ans, boards[i][j][k])
if not isPossible:
    print(-1)
else:
    print(ans-1)