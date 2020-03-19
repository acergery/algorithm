// 가장 긴 증가하는 부분 수열
// dp[n] (n번째 항이 마지막인 수열 중 최대 길이)
// dp[i] = max(dp[j]) + 1 (j < i && arr[j] < arr[i])
#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int dp[1005];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp + 1, dp + n + 1);

    return 0;
}