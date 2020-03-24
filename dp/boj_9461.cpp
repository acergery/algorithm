// Padovan Sequence (파도반 수열)
// long long 써야함, 자료형 범위 실수하지 말기
#include <bits/stdc++.h>
using namespace std;

const int MX = 101;
long long dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;

    for (int i = 5; i <= 100; i++)
        dp[i] = dp[i-5] + dp[i-1];

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}