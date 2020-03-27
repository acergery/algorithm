// 제곱수의 합
// dp[n] (n을 제곱수들의 합으로 표현할 때 항의 최소 개수)
// dp[11] = dp[11-3*3] + 1
#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        dp[i] = i;
        for (int j = 2; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[n];

    return 0;
}