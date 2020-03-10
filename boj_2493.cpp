// 탑
#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> s, tmp_s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.push(make_pair(i+1, tmp));
    }

    while(!s.empty()) {
        int cur = s.top().second;
        s.pop();
        while (cur > s.top().second) {
            tmp_s.push(make_pair(s.top().first, s.top().second));
            s.pop();
        }
        cout << s.top().first << ' ' << s.top().second << '\n';
        s.pop();
        while(!tmp_s.empty()) {
            s.push(make_pair(tmp_s.top().first, tmp_s.top().second));
            tmp_s.pop();
        }
        //cout << cur << '\n';
        //s.pop();
    }

    return 0;
}