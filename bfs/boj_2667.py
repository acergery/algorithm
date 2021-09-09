'''
2021.09.02. 단지 번호 붙이기
https://www.acmicpc.net/problem/2667
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

n = int(stdin.readline().strip())
board = [list(stdin.readline().strip()) for _ in range(n)]
vis = [[False] * n for _ in range(n)]
q = deque()
areas = []

for i in range(n):
    for j in range(n):
        if board[i][j] == '1' and not vis[i][j]:
            q.append([i, j])
            vis[i][j] = True
            area = 1

            while q:
                cur_x, cur_y = q.popleft()
                for dir in range(4):
                    nx, ny = cur_x + dx[dir], cur_y + dy[dir]
                    if 0 <= nx < n and 0 <= ny < n:
                        if board[nx][ny] == '1' and not vis[nx][ny]:
                            q.append([nx, ny])
                            vis[nx][ny] = True
                            area += 1
            areas.append(area)
areas.sort()
print(len(areas))
print(*areas, sep='\n')