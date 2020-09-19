// 알고스팟 FESTIVAL
#include <iostream>
#include <algorithm>
using namespace std;

const int MX = 1002;
int arr[MX], dp[MX];
int tc, N, L;
double sum, ans = 1e+9;

int main(void) {
    cin >> tc;
    while (tc--) {
        sum = 0.0;
        ans = 1e+9;
        cin >> N >> L;
        for (int i = 1; i < N+1; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i < N+1; i++) {
            dp[i] = dp[i-1] + arr[i];
        }
        for (int i = L; i < N+1; i++) {
            for (int j = i; j < N+1; j++) {
                sum = (double)(dp[j]-dp[j-i])/i;
                ans = min(ans, sum);
            }
        }
        printf("%0.12f\n", ans);
    }

    return 0;
}