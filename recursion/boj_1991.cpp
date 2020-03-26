// 트리 순회
#include <bits/stdc++.h>
using namespace std;

const int pre = 0, in = 1, post = 2, MX = 100; // 'A':65, 'Z':90
char lc[MX], rc[MX];
int ord;

void order(int cur) {
    if (ord == pre)
        cout << (char)cur;
    if (lc[cur] != '.')
        order(lc[cur]);
    if (ord == in)
        cout << (char)cur;
    if (rc[cur] != '.')
        order(rc[cur]);
    if (ord == post)
        cout << (char)cur;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char c, l, r;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> l >> r;
        lc[c] = l;
        rc[c] = r; 
    }

    for (ord = 0; ord < 3; ord++) {
        order('A');
        cout << '\n';
    }

    return 0;
}