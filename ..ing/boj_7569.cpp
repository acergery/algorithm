// 토마토 (3차원)
#include <bits/stdc++.h>
using namespace std;

const int MX = 102;
int box[MX][MX][MX];
int dist[MX][MX][MX];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<tuple<int, int, int>> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, h;
    cin >> m >> n >> h; // (m: 가로 칸의 수, n: 세로 칸의 수)
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                    q.push({i, j, k});
                if (box[i][j][k] == 0)
                    dist[i][j][k] = -1;
            }
        }
    }

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 6; dir++) {
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int nz = get<2>(cur) + dz[dir];

            if (nx < 0 || nx >= h || ny < 0 || ny >= m || nz < 0 || nz >= n)
                continue;            
            if (dist[nx][ny][nz] >= 0)
                continue;
            q.push({nx, ny, nz});
            dist[nx][ny][nz] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            
        }
    }

    int ans = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (dist[i][j][k] == -1) {
                    cout << "-1";
                    return 0;
                }
                ans = max(ans, dist[i][j][k]);
            }
        }
    }

    cout << ans;

    return 0;
}