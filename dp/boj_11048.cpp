// 이동하기
#include <bits/stdc++.h>
using namespace std;

const int MX = 1005;
int candy[MX][MX];
int dp[MX][MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> candy[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = max(max(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + candy[i][j];
        }
    }

    cout << dp[n][m];

    return 0;
}