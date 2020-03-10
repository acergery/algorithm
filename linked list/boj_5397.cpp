// Keylogger
#include <bits/stdc++.h>
using namespace std;

string s;
list<char> l;
list<char>::iterator t;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        t = l.end();
        cin >> s;

        for (auto i : s) {
            if (i == '<') {
                if (t != l.begin())
                    t--;
            }
            else if (i == '>') {
                if (t != l.end())
                    t++;
            }
            else if (i == '-') {
                if (t != l.begin()) {
                    t--;
                    t = l.erase(t);
                }
            }
            else {
                l.insert(t, i);
            }
        }
        
        for (auto i : l)
            cout << i;
        cout << '\n';
        l.clear();
    }

    return 0;
}