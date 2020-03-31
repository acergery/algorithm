// Tri Tiling (타일 채우기)
// 3x4뿐만 아니라 3x6, 3x8, ... 에서도 새로운 타일이 계속 만들어짐
#include <bits/stdc++.h>
using namespace std;

const int MX = 31;
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    dp[0] = 1;
    dp[2] = 3;
    for (int i = 4; i <= n; i+=2) {
        dp[i] = 3 * dp[i-2];
        for (int j = 4; j <= i; j += 2)
            dp[i] += 2 * dp[i-j];
    }
    cout << dp[n];

    return 0;
}