// 1로 만들기
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *dp = new int[n+1];
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1]+1;
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i/2]+1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i/3]+1);
    }

    cout << dp[n];

    return 0;
}