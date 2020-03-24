// Stickers (스티커)
// dp[i][j] (0: 둘 다 안 뜯음, 1: 위쪽을 뜯음, 2: 아래쪽을 뜯음)
#include <bits/stdc++.h>
using namespace std;

const int MX = 100001;
int p[MX][3], dp[MX][3];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        for (int i = 0; i < MX; i++)
            fill(dp[i], dp[i]+3, 0);

        int n;
        cin >> n;
        for (int i = 1; i <= 2; i++) 
            for (int j = 1; j <= n; j++)
                cin >> p[j][i];

        for (int i = 1; i <= n; i++) {
            dp[i][0] = max(max(dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
            dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + p[i][1];
            dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + p[i][2];
        }
        cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << '\n';
    }

    return 0;
}