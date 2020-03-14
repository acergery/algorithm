// ZAGRADE (괄호 제거)
#include <bits/stdc++.h>
using namespace std;

const int MX = 205;
bool is_del[MX];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<pair<int, char>> s;
    vector<pair<int, int>> v;
    vector<string> ans;
    string exp;
    int len_exp, len_v, size_ans;

    cin >> exp; 
    len_exp = exp.length();
    for (int i = 0; i < len_exp; i++) {
        if (exp[i] == '(')
            s.push(make_pair(i, exp[i]));
        else if ((exp[i] == ')' && s.top().second == '(')) {
            v.push_back(make_pair(s.top().first, i));
            s.pop();
        }
    }

    len_v = v.size();

    for (int i = 1; i < (1 << len_v); i++) {
        string tmp_str;
        bitset<10> bs = i;
        fill(is_del, is_del + MX, false);

        for (int j = 0; j < len_v; j++) {
            if (!bs[j])
                continue;
            is_del[v[j].first] = true;
            is_del[v[j].second] = true;
        }

        for (int j = 0; j < len_exp; j++)
            if (!is_del[j])
                tmp_str.push_back(exp[j]);
        ans.push_back(tmp_str);
    }
    sort (ans.begin(), ans.end());
    size_ans = ans.size();
    for (int i = 0; i < size_ans; i++) {
        if (i != 0 && ans[i-1] == ans[i])
            continue;
        cout << ans[i] << '\n';
    }

    return 0;
}