// 연속합
// dp[n] (n번째 항을 마지막으로 더하는 수열 합 중 최대값)
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *num = new int[n+1];
    int *dp = new int[n+1];
    fill(dp, dp + n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> num[i];
    
    for (int i = 1; i <= n; i++) 
        dp[i] = max(0, dp[i-1]) + num[i];
    
    cout << *max_element(dp + 1, dp + n + 1);

    return 0;
}