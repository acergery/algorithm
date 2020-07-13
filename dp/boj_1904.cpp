// 01타일
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000000 + 5;
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    dp[1] = 1; dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
        dp[i] %= 15746;
    }
    cout << dp[n];

    return 0;
}