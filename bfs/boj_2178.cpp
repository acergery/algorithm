// 미로 탐색
#include <bits/stdc++.h>
using namespace std;

int n, m;
string board[105];
int dis[105][105];
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    
    dis[0][0] = 1;
    q.push(make_pair(0, 0));
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dis[nx][ny] > 0 || board[nx][ny] == '0')
                continue;
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            q.push(make_pair(nx, ny));
        }
    }
    cout << dis[n-1][m-1];

    return 0;
}