// LCS
#include <bits/stdc++.h>
using namespace std;

string s1, s2;
const int MX = 1001;
int dp[MX][MX], s1_len, s2_len;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s1 >> s2;

    s1_len = s1.size();
    s2_len = s2.size();

    for (int i = 1; i <= s1_len; i++) {
        for (int j = 1; j <= s2_len; j++) {
            if (s1[i-1] == s2[j-1]) 
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);                 
        }
    }
    cout << dp[s1_len][s2_len];    

    return 0;
}