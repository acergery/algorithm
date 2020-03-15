// Term Project (텀 프로젝트)
#include <bits/stdc++.h>
using namespace std;

const int MX = 100000;
list<int> li[MX + 2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, tmp, ans = 0;

        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            li[i].push_back(tmp);
        }

        for (int i = 1; i <= n; i++) {
            list<int>::iterator t = li[i].begin();
            // cout << i << ' ';
            // cout << *t << ' ';

            while(true) {
                auto cur = *t;
                auto next = li[cur].begin();
                t = next;
                if (i == cur) // self cycle
                    break;
                if (i == *next) // self는 아니지만 cycle 존재함
                    break;
                if (cur == *next) {
                    ans++;
                    break;
                }
                cout << *next << ' ';
            }
            cout << '\n';
        }

        cout << ans << '\n';
        
        for (int i = 1; i <= n; i++)
            li[i].clear();
    }

    return 0;
}