// 쉬운 계단 수
// dp[i][j] (총 자릿수가 i이면서 맨 마지막 자리가 j인 계단 수의 개수)
// 마지막 ans에도 나머지 연산 잊지 말기
#include <bits/stdc++.h>
using namespace std;

const int MX = 101;
const int MOD = 1000000000;
long long dp[MX][10];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i < 10; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j-1 >= 0)
                dp[i][j] += dp[i-1][j-1];
            if (j+1 < 10)
                dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= MOD;
        }
    }
    long long ans = 0;
    for (int i = 0; i < 10; i++)
        ans += dp[n][i];
    ans %= MOD;

    cout << ans;

    return 0;
}