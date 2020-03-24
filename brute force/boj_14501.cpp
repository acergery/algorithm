// 퇴사
#include <bits/stdc++.h>
using namespace std;

const int MX = 16;
int t[MX], p[MX];
int n, ans;

void go(int day, int sum) {
    if (day == n+1) {
        ans = max(ans, sum);
        return;
    }
    else if (day > n+1) {
        return;
    }
    go(day+1, sum);
    go(day+t[day], sum+p[day]);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> t[i] >> p[i];
    
    go(1, 0);   
    cout << ans; 

    return 0;
}