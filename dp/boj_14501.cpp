// 퇴사
// dp[n] (n일까지 번 돈의 최댓값)
#include <bits/stdc++.h>
using namespace std;

const int MX = 16+5;
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, p;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> t >> p;
        dp[i+1] = max(dp[i+1], dp[i]);
        dp[i+t] = max(dp[i+t], dp[i]+p);
    }
    
    cout << dp[n]; 

    return 0;
}