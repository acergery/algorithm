// Bad Hair Day
#include <bits/stdc++.h>
using namespace std;

int n, tmp;
long long ans;
stack<int> s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        while (!s.empty() && tmp >= s.top())
            s.pop();
        ans += s.size();
        s.push(tmp);
    }
    cout << ans;

    return 0;
}