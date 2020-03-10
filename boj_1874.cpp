// 스택 수열
#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int n, input;
int num[MX];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        while(input < num[i]) {
            s.push(++input);
        }
    }
    

    return 0;
}