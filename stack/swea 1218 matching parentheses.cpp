/*
    swea 1218 - Matching parentheses
    Date: 2020 / 02 / 05
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int match(string str) {
    int len = str.length();
    int ret = 1;    // 1:true, 0:false
    stack<int> s;

    for (int i = 0; i < len; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<')
            s.push(str[i]);
        else {
            if (s.empty()) {
                ret = 0;
            }
            else if (str[i] - s.top() == 1 || str[i] - s.top() == 2) {
                s.pop();                
            }
            else
                ret = 0;
            if (ret == 0)
                break;
        }
    }
    if (!s.empty())
        ret = 0;
    return ret;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int len;
        string str;
        cin >> len;
        cin >> str;
        cout << '#' << 10 - tc << ' ' << match(str) << '\n';
    }

    return 0;
}