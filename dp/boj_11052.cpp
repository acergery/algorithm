// 카드 구매하기
// dp[n] (카드 n장 구입할 때 지불해야 되는 금액의 최댓값)
// dp[n] = max(dp[n-1]+p[1], dp[n-2]+p[2], ... , dp[0]+p[n])
#include <bits/stdc++.h>
using namespace std;

const int MX = 1001;
int dp[MX], p[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            dp[i] = max(dp[i], dp[i-j] + p[j]);
    cout << dp[n];

    return 0;
}