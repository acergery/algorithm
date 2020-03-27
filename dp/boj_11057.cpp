// 오르막 수
// dp[i][j] (자릿수가 i이면서 마지막 자리가 j인 오르막 수의 개수)
// 이전 자리랑 같은 경우도 오르막수에 포함되는거 주의하기
#include <bits/stdc++.h>
using namespace std;

const int MX = 1001;
const int DIVISOR = 10007;
int dp[MX][10];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    fill(dp[1], dp[1]+10, 1);
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] += dp[i-1][k];
            }
            dp[i][j] %= DIVISOR;    
        }
    }
    for (int i = 0; i < 10; i++)
        ans += dp[n][i];
    ans %= DIVISOR;
    cout << ans;

    return 0;
}