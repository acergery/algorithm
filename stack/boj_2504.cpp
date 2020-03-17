// 괄흐의 값
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    stack<char> s;
    int tmp = 1, ans = 0;

    cin >> str;
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (str[i] == '(' || str[i] == '[') {
            tmp *= (str[i] == '(')? 2:3;
            s.push(str[i]);
        }
        else {
            if (s.empty()) {
                ans = 0; 
                break;
            }
            if (str[i] == ')') {
                if (i >= 1 && str[i-1] == '(')
                    ans += tmp;
                if (s.top() == '(')
                    s.pop();
                tmp /= 2;
            } 
            else if (str[i] == ']') {               
                if (i >= 1 && str[i-1] == '[')
                    ans += tmp;
                if (s.top() == '[')
                    s.pop();
                tmp /= 3;
            }
        }        
    }

    if (!s.empty())
        ans = 0;
    cout << ans << '\n';
    
    return 0;
}