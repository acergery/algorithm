// 안전 영역
#include <bits/stdc++.h>
using namespace std;

const int MX = 101;
int board[MX][MX];
bool vis[MX][MX];
queue<pair<int, int>> q;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx_h = 0, mx_cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (mx_h < board[i][j])
                mx_h = board[i][j];
        }
    }

    for (int cur_h = 0; cur_h <= mx_h; cur_h++) {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            fill(vis[i], vis[i] + n, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (vis[i][j] || board[i][j] <= cur_h)
                    continue;
                vis[i][j] = true;
                q.push({i, j});
                cnt++;

                while (!q.empty()) {
                    auto cur = q.front();
                    q.pop();

                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (vis[nx][ny] || board[nx][ny] <= cur_h) // 흰색 칸 개수 세기
                            continue;
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                    }   
                }
            }
        }
        if (mx_cnt < cnt)
            mx_cnt = cnt;
    }
    cout << mx_cnt;

    return 0;
}