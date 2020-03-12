// 스택 수열
#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int n;
int num[MX];
string str;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> s;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int pos = 0;
    for (int i = 1; i <= n; i++) {
        s.push(i);
        str += '+';
        while (!s.empty() && s.top() == num[pos]) {
            pos++;
            s.pop();
            str += '-';
        }
    }

    if (!s.empty())
        cout << "NO\n";
    else {
        for (auto i : str)
            cout << i << '\n';
    }   

    return 0;
}