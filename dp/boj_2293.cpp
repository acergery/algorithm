// 동전 1
// dp[k] += dp[k-val[n]] (k >= val[n])
// 동전의 종류가 n개일 때, 합이 k가 될 수 있는 경우의 수

#include <bits/stdc++.h>
using namespace std;

const int COIN_MX = 101;
const int MX = 10001;
int val[COIN_MX];
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> val[i];

    dp[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j >= val[i]) {
                dp[j] += dp[j-val[i]];
            }
        }
    }

    cout << dp[k];

    return 0;
}