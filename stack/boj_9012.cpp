// Parenthesis (괄호)
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        stack<char> s;
        bool is_VPS = true;

        cin >> str;
        for (auto it : str) {
            if (it == '(') {
                s.push('(');
            }
            else if (it == ')') {
                if (s.empty()) {
                    is_VPS = false;
                    break;
                }
                if (s.top() == '(') {
                    s.pop();
                }
                else {
                    is_VPS = false;
                    break;
                }
            }
        }

        if (!s.empty())
            is_VPS = false;
        
        if (!is_VPS)
            cout << "NO\n";
        else 
            cout << "YES\n";
    }

    return 0;
}
