// 포도주 시식
// dp[n] (n번째 잔까지 봤을 때 마신 포도주의 최대 양)
// 0번 연속으로 먹음 -> dp[n] = dp[n-1] (이번에 안 먹음)
// 1번 연속으로 먹음 -> dp[n] = dp[n-2] + arr[n] (이전 단계에 안먹고, 이번엔 먹음)
// 2번 연속으로 먹음 -> dp[n] = dp[n-3] + arr[n-1] + arr[n]
#include <bits/stdc++.h>
using namespace std;

const int MX = 10001;
int arr[MX];
int dp[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for (int i = 3; i <= n; i++) {
        dp[i] = max(max(dp[i-1], dp[i-2] + arr[i]), dp[i-3] + arr[i-1] + arr[i]);
    }
    cout << dp[n];

    return 0;
}