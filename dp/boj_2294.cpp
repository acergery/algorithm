// 동전 2
// dp[i] (i원을 만드는 최소 동전의 개수)
#include <bits/stdc++.h>
using namespace std;

const int MX = 10005;
int coin[101];
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) 
       cin >> coin[i];    

    fill(dp+1, dp+k+1, MX);

    for (int i = 1; i <= n; i++) 
        for (int j = coin[i]; j <= k; j++) 
            dp[j] = min(dp[j], dp[j-coin[i]]+1);            

    if (dp[k] == MX)
        dp[k] = -1;
    cout << dp[k];

    return 0;
}