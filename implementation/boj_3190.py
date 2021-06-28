'''
2021.06.28 뱀 (zmija)
https://www.acmicpc.net/problem/3190
'''
import sys
from collections import deque

sys.stdin = open("../input.txt", "r")


def change_dir(c, direction):
    if c == 'L':
        direction = (direction - 1) % 4
    else:
        direction = (direction + 1) % 4
    return direction


# up, right, down, left
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

N = int(input())  # 보드의 크기
K = int(input())  # 사과의 개수
board = [[0] * N for _ in range(N)]
for _ in range(K):
    r, c = map(int, input().split())
    board[r - 1][c - 1] = 1
L = int(input())  # 뱀의 방향 변환 횟수
command = {}
for _ in range(L):
    x, c = input().split()  # x초가 끝난 뒤 c의 방향으로 90도 회전 ('L': 왼쪽, 'D': 오른쪽)
    command[int(x)] = c

cnt = 1
direction = 1
x, y = 0, 0
board[x][y] = 2
snake = deque([[x, y]])

while True:
    nx, ny = x + dx[direction], y + dy[direction]
    if nx < 0 or nx >= N or ny < 0 or ny >= N or board[nx][ny] == 2:
        break
    else:
        if board[nx][ny] != 1:
            tmp_x, tmp_y = snake.popleft()
            board[tmp_x][tmp_y] = 0
        board[nx][ny] = 2
        snake.append([nx, ny])
        if cnt in command.keys():
            direction = change_dir(command[cnt], direction)
        cnt += 1
        x, y = nx, ny

print(cnt)
