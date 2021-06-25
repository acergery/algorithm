'''
2021.06.25. 자물쇠와 열쇠
https://programmers.co.kr/learn/courses/30/lessons/60059
'''

# def print_2d_arr(arr):
#     for i in range(len(arr)):
#         for j in range(len(arr[i])):
#             print(arr[i][j], end='')
#         print()
#     print()

def rotate(key):
    sz = len(key)
    ret = [[0]*sz for _ in range(sz)]

    for r in range(sz):
        for c in range(sz):
            ret[c][sz-1-r] = key[r][c]
    return ret

def key_in(x, y, board, key):
    M = len(key)
    for i in range(M):
        for j in range(M):
            board[x+i][y+j] += key[i][j]

def key_out(x, y, board, key):
    M = len(key)
    for i in range(M):
        for j in range(M):
            board[x+i][y+j] -= key[i][j]

def check(board, key, lock):
    M, N = len(key), len(lock)
    for i in range(N):
        for j in range(N):
            if board[M+i][M+j] != 1:
                return False
    return True

def solution(key, lock):
    M, N = len(key), len(lock)
    board = [[0]*(M*2+N) for _ in range(M*2 + N)]
    for i in range(N):
        for j in range(N):
            board[M+i][M+j] = lock[i][j]

    for _ in range(4):
        key = rotate(key)
        for i in range(1, M+N):
            for j in range(1, M+N):
                key_in(i, j, board, key)
                if check(board, key, lock):
                    return True
                key_out(i, j, board, key)

    return False

keys = [
    [[0, 0, 0], [1, 0, 0], [0, 1, 1]],
]

locks = [
    [[1, 1, 1], [1, 1, 0], [1, 0, 1]],
]

for i in range(len(keys)):
    print(solution(keys[i], locks[i]))