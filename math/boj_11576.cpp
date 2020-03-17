// Base Conversion
#include <bits/stdc++.h>
using namespace std;

int num[30];
stack<int> s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, m;
    int tmp = 0;
    cin >> a >> b >> m;
    for (int i = 0; i < m; i++)
        cin >> num[i];
    for (int i = m-1; i >= 0; i--) 
        tmp += num[i] * pow(a, m-1-i);
    while (tmp != 0) {
        s.push(tmp % b);
        tmp /= b;
    }
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}