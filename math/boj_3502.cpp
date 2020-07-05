// modulo (나머지)
#include <bits/stdc++.h>
using namespace std;

int mod[10];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int ans = 10;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        mod[i] = n % 42;
    }

    sort(mod, mod + 10);

    for (int i = 1; i < 10; i++) {
        if (mod[i-1] == mod[i]) {
            ans--;
        }
    }
    cout << ans;

    return 0;
}