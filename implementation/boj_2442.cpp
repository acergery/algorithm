// 별 찍기 - 5
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++)
            cout << ' ';
        for (int j = 0; j < 2*i+1; j++)
            cout <<'*';
        cout << '\n';
    }
    return 0;
}