// 피보나치 수 5
#include <bits/stdc++.h>
using namespace std;

int dp[21];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) 
        dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n];

    return 0;
}