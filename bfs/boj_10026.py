'''
2021.09.03. Cow Art (적록색약)
https://www.acmicpc.net/problem/10026
'''
from sys import stdin
from collections import deque

stdin = open("../input.txt", "r")

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def bfs(board, x, y, val):
    q = deque()
    q.append([x, y])

    while q:
        cur_x, cur_y = q.popleft()
        for dir in range(4):
            nx, ny = cur_x + dx[dir], cur_y + dy[dir]
            if 0 <= nx < n and 0 <= ny < n:
                if board[nx][ny] == val:
                    q.append([nx, ny])
                    board[nx][ny] = 0

n = int(stdin.readline().strip())
board = [list(stdin.readline().strip()) for _ in range(n)]
board_new = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        board_new[i][j] = 1 if board[i][j] == 'B' else 2

ans = 0
ans_new = 0
for i in range(n):
    for j in range(n):
        if board[i][j] != 0:
            bfs(board, i, j, board[i][j])
            ans += 1
        if board_new[i][j] != 0:
            bfs(board_new, i, j, board_new[i][j])
            ans_new += 1
print(ans, ans_new)