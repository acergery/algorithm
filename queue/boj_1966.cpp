// Printer Queue (프린터 큐)
#include <bits/stdc++.h>
using namespace std;

int pri[105];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    
    while (tc--) {
        queue<pair<int, int>> q;
        pair<int, int> tmp_pair;
        int n, m;
        int cnt = 1, mx = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> pri[i];
            q.push(make_pair(i, pri[i]));
        }
        sort(pri, pri + n);
        while (!q.empty()) {
            tmp_pair = q.front();
            q.pop();

            if (tmp_pair.second == pri[n-cnt]) {
                if (tmp_pair.first == m)
                    break;
                cnt++;
            }
            else {
                q.push(tmp_pair);
            }         

        }
        cout << cnt << '\n';
        
    }

    return 0;
}