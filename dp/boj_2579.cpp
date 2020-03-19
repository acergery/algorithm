// 계단 오르기
// dp[n][k] (k개 계단을 연속으로 밟은 상태, 현재 n번째 계단)
// dp[n][1] = max(dp[n-2][1], dp[n-2][2]) + stair[n]
// dp[n][2] = dp[n-1][1] + stair[n]
#include <bits/stdc++.h>
using namespace std;

const int MX = 305;
int dp[MX][3];
int stair[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> stair[i];
    }
    dp[1][1] = stair[1];
    dp[1][2] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i][1] = max(dp[i-2][1], dp[i-2][2]) + stair[i];
        dp[i][2] = dp[i-1][1] + stair[i];
    }
    cout << max(dp[n][1], dp[n][2]);

    return 0;
}