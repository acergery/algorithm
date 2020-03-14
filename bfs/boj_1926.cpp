// 그림
#include <bits/stdc++.h>
using namespace std;

int board[505][505];
bool vis[505][505];
int dx[4] = { 1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int area, cnt = 0, mx_area = 0;
    queue<pair<int, int>> q;

    cin >> n >> m;
    for (int i = 0; i < n ;i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j] || board[i][j] == 0)
                continue;
            area = 0;
            cnt++;
            vis[i][j] = true;
            q.push(make_pair(i, j));

            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                area++;

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] == 0)
                        continue;
                    vis[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
            if (mx_area < area)
                mx_area = area;
        }
    }

    cout << cnt << '\n' << mx_area;

    return 0;
}