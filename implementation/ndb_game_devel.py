'''
2021.06.16. 게임 개발
'''
import sys

sys.stdin = open("../input.txt", "r")

# 북, 동, 남, 서
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

n, m = map(int, input().split())
x, y, d = map(int, input().split())

mp = []
for i in range(n):
    mp.append(list(map(int, input().split())))

vis = [[0] * m for _ in range(n)]
vis[x][y] = 1


def turn_left():
    global d
    d -= 1
    if d == -1:
        d = 3


cnt = 1
turn_time = 0
while True:
    turn_left()
    nx = x + dx[d]
    ny = y + dy[d]

    if vis[nx][ny] == 0 and mp[nx][ny] == 0:
        vis[nx][ny] = 1
        x, y = nx, ny
        cnt += 1
        turn_time = 0
        continue
    else:
        turn_time += 1

    if turn_time == 4:  # 네 방향 모두 갈 수 없음
        nx = x - dx[d]
        ny = y - dy[d]
        if mp[nx][ny] != 0:  # 뒤가 바다로 막혀 있는 경우
            break
        else:  # 뒤로 갈 수 있을 경우
            x, y = nx, ny
        turn_time = 0
print(cnt)
