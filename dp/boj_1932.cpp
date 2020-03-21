// The Triangle (정수 삼각형)
#include <bits/stdc++.h>
using namespace std;

const int MX = 501;
int arr[MX][MX];
int dp[MX][MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= i; j++)
            cin >> arr[i][j];

    dp[1][1] = arr[1][1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
        }
    }
    int ans = dp[n][1];
    for (int i = 2; i <= n; i++) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans;
    
    return 0;
}