// 토마토
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000;
int m, n;
int box[MX+5][MX+5];
int dist[MX+5][MX+5];
bool vis[MX+5][MX+5];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < MX + 5; i++)
        fill(dist[i], dist[i]+MX+5, -1);

    cin >> m >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            cin >> box[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j] || box[i][j] == -1)
                continue;
            
            if (box[i][j] == 1) {
                vis[i][j] = true;
                dist[i][j] = 0;
                q.push(make_pair(i, j));
            }
            
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    //if (vis[nx][ny])
                    //    continue;
                    if (box[nx][ny] == 0) {
                        vis[nx][ny] = 1;
                        if (dist[nx][ny] >= 0)
                            dist[nx][ny] = min(dist[nx][ny], dist[cur.first][cur.second] + 1);
                        else
                            dist[nx][ny] = dist[cur.first][cur.second] + 1;
                        q.push(make_pair(nx, ny));
                    }
                }
            }

        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
    int ans = -1;
    bool is_possible = true;
    bool flag = true; // 처음 부터 모든 토마토 다 익은 상태면 true
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (box[i][j] == 0) // 처음에 안 익은 토마토가 존재하면
                flag = false;
            if (box[i][j] != -1 && !vis[i][j]) {
                is_possible = false;
                break;
            }
            if (ans < dist[i][j])
                ans = dist[i][j];
        }
    }
    if (flag)
        ans = 0;
    if (!is_possible)
        ans = -1;
    cout << ans;

    return 0;
}