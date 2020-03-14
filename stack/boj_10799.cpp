// 쇠막대기
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    stack<char> s;
    int ans = 0, len;

    cin >> str;
    len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == '(')
            s.push('(');
        else if ((i >= 1) && str[i] == ')' && str[i-1] == '(') {
            s.pop();
            ans += s.size();
        }
        else {
            s.pop();
            ans += 1;
        }

    }
    cout << ans;
    return 0;
}