// RGB 거리
// dp[i][j] (i번 집을 j 색으로 칠할 때 최소 비용)
#include <bits/stdc++.h>
using namespace std;

const int MX = 1005;
int dp[MX][3];
int val[MX][3];

int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++)
            cin >> val[i][j];
    }
    
    dp[1][0] = val[1][0];
    dp[1][1] = val[1][1];
    dp[1][2] = val[1][2];

    for (int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + val[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + val[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + val[i][2];
    }

    int ans = min(dp[n][0], dp[n][1]);
    ans = min(ans, dp[n][2]);
    cout << ans;

    return 0;
}