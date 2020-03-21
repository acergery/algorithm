// 1, 2, 3 더하기
#include <bits/stdc++.h>
using namespace std;

int dp[11];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, n;
    cin >> tc;
    while (tc--) {
        fill(dp, dp+11, 0);
        cin >> n;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n] << '\n';
    }

    return 0;
}