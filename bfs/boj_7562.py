'''
2021.09.02. Knight Moves (나이트의 이동)
https://www.acmicpc.net/problem/7562
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, 2, 2, 1, -1, -2, -2, -1]
dy = [2, 1, -1, -2, -2, -1, 1, 2]

tc = int(stdin.readline().strip())
for _ in range(tc):
    l = int(stdin.readline().strip())
    board = [[0] * l for _ in range(l)]
    dist = [[-1] * l for _ in range(l)]
    x1, y1 = map(int, stdin.readline().strip().split())
    x2, y2 = map(int, stdin.readline().strip().split())
    q = deque()
    q.append([x1, y1])
    dist[x1][y1] = 0

    while q:
        cur_x, cur_y = q.popleft()
        if cur_x == x2 and cur_y == y2:
            break
        for dir in range(8):
            nx, ny = cur_x + dx[dir], cur_y + dy[dir]
            if 0 <= nx < l and 0 <= ny < l:
                if dist[nx][ny] == -1:
                    q.append([nx, ny])
                    dist[nx][ny] = dist[cur_x][cur_y] + 1
    print(dist[x2][y2])
