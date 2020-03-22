// 토마토
#include <bits/stdc++.h>
using namespace std;

const int MX = 1002;
int box[MX][MX];
int dist[MX][MX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n; // (m: 가로 칸의 수, n: 세로 칸의 수)
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> box[i][j];
    
    for (int i = 0; i < n; i++)
        fill(dist[i], dist[i]+m, -1);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (box[i][j] == 1) {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dist[nx][ny] == -1 && box[nx][ny] == 0) {
                q.push({nx, ny});
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
            }           
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[i][j] == -1 && box[i][j] == 0) {
                cout << "-1";
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }

    cout << ans;

    return 0;
}