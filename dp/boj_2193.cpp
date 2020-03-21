// 이친수
/// dp[i][j] (길이가 i이고 j로 끝나는 이친수)
// dp[i-1][1] = dp[i-2][0] 이므로 결국
// dp[i] = dp[i-1] + dp[i-2]로 바꿔 쓸 수 있음
// int overflow 주의 (long long 이어야 함)
#include <bits/stdc++.h>
using namespace std;

long long dp[91][2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;
    dp[1][0] = 0;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    cout << dp[n][0] + dp[n][1];
    

    return 0;
}