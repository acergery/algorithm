// 별찍기 - 13
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << '*';
        cout << '\n';
    }
    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}