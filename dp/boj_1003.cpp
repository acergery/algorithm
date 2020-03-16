// 피보나치 함수
#include <bits/stdc++.h>
using namespace std;

const int MX = 40;
pair<int, int> dp[MX+2];

pair<int, int> fibo(int n) {
    if (n == 0)
        return {1, 0};
    else if (n == 1)
        return {0, 1};
    else {
        if (dp[n].first > 0 || dp[n].second > 0)
            return dp[n];
        dp[n].first = fibo(n-1).first + fibo(n-2).first;
        dp[n].second = fibo(n-1).second + fibo(n-2).second;
        return dp[n];
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        cout << fibo(n).first << ' ' << fibo(n).second << '\n';
    }

    return 0;
}