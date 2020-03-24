// 2 x n 타일링 2 
// dp[i] = 2dp[i-2] + dp[i-1]
// dp[i] = 3dp[i-2] +  dp[i-1] 로 착각할 수도 있는데, 
// 생각해보면 2x1을 세로로 두는 것은 dp[i-1]과 겹치므로 2dp[i-2] 여야 함
#include <bits/stdc++.h>
using namespace std;

const int MX = 1001;
const int DIVISOR = 10007;
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
        dp[i] = (2 * dp[i-2] + dp[i-1]) % DIVISOR;
    cout << dp[n];

    return 0;
}