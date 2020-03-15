// 괄흐의 값
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    stack<pair<char, int>> s;
    int tmp;

    cin >> str;
    for (auto it : str) {
        tmp = 0;
        if (it == '(' || it == '[') {
            s.push(make_pair(it, 1));
        }
        else {
            if (s.empty()) {
                break;
            }
            if (it == ')') {
                if (s.top().first == '(') {
                    tmp = s.top().second;
                    s.pop();
                    s.push(make_pair('x', 2 * tmp));
                }
            }
            else if (it == ']') {
                if (s.top().first == '[') {
                    tmp = s.top().second;
                    s.pop();
                    s.push(make_pair('x', 3 * tmp));
                }
                else if (s.top().first == 'x') {
                    while (s.top().first == 'x') {
                        tmp += s.top().second;
                        s.pop();
                    }
                    if (s.top().first == '[') {
                        s.pop();
                        s.push(make_pair('x', 3 *tmp));
                    }
                    
                }
            }

        }
    }
    
    return 0;
}