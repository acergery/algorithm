// 유기농 배추
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int farm[55][55];
bool vis[55][55];
queue<pair<int, int>> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int cnt = 0;
        int m, n, k;

        cin >> m >> n >> k;

        for (int i = 0; i < n; i++) {
            fill(vis[i], vis[i]+m, false);
            fill(farm[i], farm[i]+m, 0);
        }

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] || farm[i][j] == 0)
                    continue;
                vis[i][j] = true;
                q.push(make_pair(i, j));
                cnt++;

                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                            continue;
                        if (vis[nx][ny] || farm[nx][ny] == 0)
                            continue;
                        vis[nx][ny] = true;
                        q.push(make_pair(nx, ny));
                    }
                }

            }
        }
        cout << cnt << '\n';
    }



    return 0;
}