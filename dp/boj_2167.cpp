// 2차원 배열의 합
// dp[i][j] ({1,1} 부터 {i,j} 까지의 합, (i * j))
// 무식하게 배열에 다 저장하는 방법 (396ms) -> dp (12ms)
#include <bits/stdc++.h>
using namespace std;

const int MX = 301;
int dp[MX][MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tmp, n, m, k, i, j, x, y;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> tmp;
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + tmp;
        }
    }
    cin >> k;
    while (k--) {
        cin >> i >> j >> x >> y;
        cout << dp[x][y] - dp[i-1][y] - dp[x][j-1] + dp[i-1][j-1] << '\n';
    }

    return 0;
}