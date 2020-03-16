// 단지 번호 붙이기
#include <bits/stdc++.h>
using namespace std;

const int MX = 25 + 2;
bool vis[MX][MX];
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string board[MX];
int arr[MX*MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int complex_num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vis[i][j] || board[i][j] == '0')
                continue;
            vis[i][j] = true;
            q.push({i, j});
            complex_num++;
            while (!q.empty()) {
                auto cur = q.front();
                q.pop();
                arr[complex_num]++;

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] == '0')
                        continue;
                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << complex_num << '\n';
    sort(arr + 1, arr+complex_num+1);
    for (int i = 1; i <= complex_num; i++) {
        cout << arr[i] << '\n';
    } 

    return 0;
}