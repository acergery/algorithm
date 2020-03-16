// 영역 구하기
#include <bits/stdc++.h>
using namespace std;

const int MX = 100 + 2;
int rec[MX][MX];
bool vis[MX][MX];
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int area[MX*MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        int lbx, lby, rux, ruy;
        cin >> lbx >> lby >> rux >> ruy;
        for (int j = lby; j < ruy; j++)
            for (int kk = lbx; kk < rux; kk++)
                rec[j][kk] = 1;
    }

    int cnt = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (vis[i][j] || rec[i][j] == 1)
                continue;
            vis[i][j] = true;
            q.push({i, j});
            cnt++;
            while (!q.empty()) {
                auto cur = q.front();
                q.pop();
                area[cnt]++;
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.second + dx[dir];
                    int ny = cur.first + dy[dir];

                    if (ny < 0 || ny >= m || nx < 0 || nx >= n)
                        continue;
                    if (vis[ny][nx] || rec[ny][nx] == 1)
                        continue;
                    vis[ny][nx] = true;
                    q.push({ny, nx});

                }
            }
        }
    }
    cout << cnt << '\n';
    sort(area + 1, area + cnt + 1);
    for (int i = 1; i <= cnt; i++)
        cout << area[i] << ' ';

    return 0;
}