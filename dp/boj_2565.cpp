// 전깃줄
// dp[n] (n번째 항이 마지막인 수열 중 최대 길이)
// dp[i] = max(dp[j]) + 1 (j < i && arr[j] < arr[i])
#include <bits/stdc++.h>
using namespace std;

int dp[505];
int arr[505];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        arr[a] = b;
    }

    for (int i = 1; i <= 500; i++) {
        if  (arr[i] == 0) 
            continue;
        int tmp = 0;

        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i])
                tmp = max(tmp, dp[j]);
        }
        dp[i] = tmp + 1;
    }

    cout << n - *max_element(dp + 1, dp + 500 + 1);

    return 0;
}